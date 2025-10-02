#include <stdio.h>
#include "gestion_produit.h"
#include "gestion_profile.h"
#include "gestion_solde.h"
#include "gestion_achat.h"
#include "stats.h"
#define YEL "\e[0;33m"
#define reset "\e[0m"
#define RED "\e[0;31m"
#define BGRN "\e[1;32m"

void mainmenu()
{
    int choice;
    int subchoice;
    int updatechoice;
    do
    {
        printf(BGRN "\n=== SYSTEME D'ACHAT CLIENT ===\n" reset);
        printf(YEL "1. Manage user's profile\n" reset);
        printf(YEL "2. Manage user's balance\n" reset);
        printf(YEL "3. Manage products\n" reset);
        printf(YEL "4. perform a transactions\n" reset);
        printf(YEL "5. View statistics\n" reset);
        printf(RED "0. Exit\n" reset);
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            do
            {
                printf(BGRN "\n--- User Profile Menu ---\n" reset);
                printf(YEL "1. Create profile\n" reset);
                printf(YEL "2. Update profile\n" reset);
                printf(YEL "3. Display profile\n" reset);
                printf(RED "0. Back to main menu\n" reset);
                printf("Enter your choice: ");
                scanf("%d", &subchoice);
                
                switch (subchoice)
                {
                case 1:
                addClient();
                break;
                case 2:
                do
                {
                    printf(BGRN "\n--- Update Profile Menu ---\n" reset);
                    printf(YEL "1. Update first name\n" reset);
                    printf(YEL "2. Update last name\n" reset);
                    printf(RED "0. Back to main menu\n" reset);
                    printf("Enter your choice: ");
                        scanf("%d", &updatechoice);
                        switch (updatechoice)
                        {
                        case 1 :
                            updateClientFirstName();
                            break;
                        case 2 :
                            updateClientLastName();
                            break;
                        
                        default:
                            break;
                        }
                    } while (updatechoice != 0);               
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
                if (clientCount != 0)
                {
                    printf(BGRN "\n--- User Balance Menu ---\n" reset);
                    printf(YEL "1. Display balance\n" reset);
                    printf(YEL "2. Add balance\n" reset);
                    printf(RED "0. Back to main menu\n" reset);
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
                }
                else
                {
                    printf("You need to create a profile first.\n");
                    subchoice = 0;
                }
            } while (subchoice != 0);
            break;
        case 3:
            do
            {
                printf(BGRN "\n--- Products Menu ---\n" reset);
                printf(YEL "1. Display products\n" reset);
                printf(YEL "2. Search product\n" reset);
                printf(YEL "3. Sort products\n" reset);
                printf(YEL "4. Display all product info\n" reset);
                printf(RED "0. Back to main menu\n" reset);
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
                    printf(BGRN "\n--- Choose a sorting method ---\n" reset);
                    printf(YEL "1. To sort them out by price\n" reset);
                    printf(YEL "2. To sort them out by name\n" reset);
                    printf(YEL "3. To sort them out by category\n" reset);
                    printf(RED "0. Back to main menu\n" reset);
                    scanf("%d", &subchoice);
                    switch (subchoice)
                    {
                    case 1:
                        sortProductsMenuByNumbers();
                        break;
                    case 2:
                        sortProductsMenuByName();
                        break;
                    case 3:
                        sortProductsMenuByCategory();
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
            buyProduct();
            break;
        case 5:
            viewStatistics();
            break;
        case 0:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
            return;
            break;
        }

    } while (choice != 0);
}