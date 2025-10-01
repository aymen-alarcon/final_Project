#include "gestion_achat.h"
#include "gestion_produit.h"
#include "gestion_profile.h"
#include "connection.h"
#include "sqlite3.h"
#define BRED "\e[1;31m"
#define reset "\e[0m"
#include <stdio.h>

int buyProduct(){
    int choice;
    int found = 0;
    printf("can you please enter the products "BRED"ID " reset "that you want to buy: ");
    scanf("%d", &choice);
    
    for (int i = 0; i < 10; i++)
    {
        if (products[i].idProduit == choice)
        {
            found = 1;
            if (products[i].prix > client[1].balance)
            {
                printf("Transaction failed. Insufficient balance.\n");
            }else if (products[i].stock <= 0)
            {
                printf("Transaction failed. Product is out of stock.\n");
            }     
            else
            {
                products[i].stock -= 1;
                client[1].balance -= products[i].prix;
                printf("You have successfully purchased %s for %.2f\n", products[i].nom, products[i].prix);
                printf("Your new balance is: %.2f\n", client[1].balance);

                sqlite3* db = connection();                
                char sql_insert[256];
                sprintf(sql_insert,
                        "INSERT INTO history (ProduitID, prix) VALUES (%d, %.2f);",
                        products[i].idProduit, products[i].prix);

                char *err_msg = 0;
                int rc = sqlite3_exec(db, sql_insert, 0, 0, &err_msg);
                if (rc != SQLITE_OK) {
                    fprintf(stderr, "SQL error: %s\n", err_msg);
                    sqlite3_free(err_msg);
                    sqlite3_close(db);
                    return 1;
                }

                sqlite3_close(db);
            }    
        }
    }
    if (found == 0)
    {
        printf("Product with ID %d not found.\n", choice);
    }
}