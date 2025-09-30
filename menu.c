#include <stdio.h>
#include "gestion_produit.h"
#include "gestion_profile.h"
#include "gestion_solde.h"

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
            do
            {
                printf("\n--- Transactions Menu ---\n");
                printf("1. Sélection de produit : Choix parmi le catalogue disponible\n");
                printf("2. Vérifications : Contrôle du stock et adéquation solde/prix\n");
                printf("3. Paiement : Débit automatique du solde virtuel\n");
                printf("4. Mise à jour : Actualisation du stock produit et solde client\n");
                printf("5. Confirmation : Message de succès ou d'échec de la transaction\n");
                printf("0. Back to main menu\n");
                printf("Enter your choice: ");
                scanf("%d", &subchoice);

                switch (subchoice)
                {
                case 1:
                    //selectProduct();      
                    break;
                case 2:
                    //checkStockAndBalance();
                    break;
                case 3:
                    //processPayment();     
                    break;
                case 4:
                    //updateStockAndBalance();  
                    break;
                case 5:
                    //transactionConfirmation(); 
                    break;
                case 0:
                    //printf("Returning to main menu...\n");
                    break;
                default:
                    printf("Invalid choice. Try again.\n");
                    break;
                }
            } while (subchoice != 0);
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
