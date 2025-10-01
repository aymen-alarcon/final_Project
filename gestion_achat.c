#include "gestion_achat.h"
#include "gestion_produit.h"
#include "gestion_profile.h"
#include <stdio.h>

void buyProduct()
{
    int choice;
    int found = 0;
    printf("can you please enter the products id that you want to buy: ");
    scanf("%d", &choice);

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
            else
            {
                products[i].stock -= 1;
                client[1].balance -= products[i].prix;
                printf("You have successfully purchased %s for %.2f\n", products[i].nom, products[i].prix);
                printf("Your new balance is: %.2f\n", client[1].balance);
            }
        }
    }
    if (found == 0)
    {
        printf("Product with ID %d not found.\n", choice);
    }
}