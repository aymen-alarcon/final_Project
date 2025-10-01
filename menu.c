#include <stdio.h>
#include "gestion_produit.h"
#include "gestion_profile.h"
#include "gestion_solde.h"
#include "gestion_achat.h"

void mainmenu()
{
    int choice;      
    int subchoice; 
    do
    {
        printf("\n=== SYSTEME D'ACHAT CLIENT ===\n");
        printf("1. Manage user's profile\n");
        printf("2. Manage user's balance\n");
        printf("3. Manage products\n");
        printf("4. perform a transactions\n");
        printf("5. View statistics\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            do
            {
                printf("\n--- User Profile Menu ---\n");
                printf("1. Create profile\n");
                printf("2. Update profile\n");
                printf("3. Display profile\n");
                printf("0. Back to main menu\n");
                printf("Enter your choice: ");
                scanf("%d", &subchoice);

                switch (subchoice)
                {
                case 1:
                    addClient();
                    break;
                case 2:
                    updateClient();
                    break;
                case 3:
                    displayClient();
                    break;
                default:
                    break;
                }
            } while (subchoice != 0);
        break;
        case 2:
            do
            {
                if (clientCount != 0){
                    printf("\n--- User Balance Menu ---\n");
                    printf("1. Display balance\n");
                    printf("2. Add balance\n");
                    printf("0. Back to main menu\n");
                    printf("Enter your choice: ");
                    scanf("%d", &subchoice);

                    switch (subchoice)
                    {
                        case 1:
                            displayUserBalance();
                            break;
                        case 2:
                            addBalance();
                            break;
                        default:
                        break;
                    }
                }else {
                    printf("You need to create a profile first.\n");
                    subchoice = 0;
                }            
            } while (subchoice != 0);
        break;
        case 3: 
            do
            {
                printf("\n--- Products Menu ---\n");
                printf("1. Display products\n");
                printf("2. Search product\n");
                printf("3. Sort products\n");
                printf("4. Display all product info\n");
                printf("0. Back to main menu\n");
                printf("Enter your choice: ");
                scanf("%d", &subchoice);

                switch (subchoice)
                {
                case 1:
                    displayProducts();
                    break;
                case 2:
                    searchProduct();
                    break;
                case 3:
                    printf("1. To sort them out by price\n");
                    printf("2. To sort them out by name\n");
                    scanf("%d", &subchoice);
                    switch (subchoice)
                    {
                        case 1 :
                            sortProductsMenuByNumbers();
                        break;
                        case 2 :
                            sortProductsMenuByName();
                        break;
                        default: 
                        break;
                    }
                break;
                case 4:
                    displayAllProductsInfo();
                    break;
                default:
                    break;
                }
            } while (subchoice != 0);
        break;
        case 4:
            buyproduct();
        break;
        case 5:
            //viewStatistics();
        break;
        case 0:
            printf("Exiting program...\n");
        break;
        default:
            printf("Invalid choice. Try again.\n");
        break;
        }

    } while (choice != 0);
}
