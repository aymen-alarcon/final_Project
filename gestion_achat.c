#include "gestion_achat.h"
#include "gestion_produit.h"
#include "gestion_profile.h"
#include <stdio.h>

void buyProduct()
{
    int choice;
    int found = 0;
    int numberrequested = 1;
    printf("can you please enter the products id that you want to buy: ");
    scanf("%d", &choice);
    printf("can you please enter the products id that you want to buy: ");
    scanf("%d", &numberrequested);

    for (int i = 0; i < 10; i++)
    {
        if (products[i].idProduit == choice)
        {
            found = 1;
            if (products[i].prix > client[1].balance)
            {
                printf("Transaction failed. Insufficient balance.\n");
            }
            else if (products[i].stock <= 0)
            {
                printf("Transaction failed. Product is out of stock.\n");
            }            
            else if (products[i].stock < numberrequested || numberrequested <= 0)
            {
                printf("Transaction failed. Only %d items left in stock.\n", products[i].stock);
                
            }
            else if (products[i].prix * numberrequested > client[1].balance)
            {
                printf("Transaction failed. You do not have enough balance to buy %d items.\n", numberrequested);
            }
            else
            {
                products[i].stock -= numberrequested;
                client[1].balance -= products[i].prix * numberrequested;
                printf("You have successfully purchased %d x %s for %.2f\n", numberrequested, products[i].nom, products[i].prix * numberrequested);
                printf("Your new balance is: %.2f\n", client[1].balance);
            }
        }
    }
    if (found == 0)
    {
        printf("Product with ID %d not found.\n", choice);
    }
}