#include <stdio.h>
#include "menu.h"
#include "gestion_produit.h"
#include "gestion_profile.h"
#include "gestion_solde.h"

void mainmenu(){
    int choice;
    do
    {
        printf("=== SYSTEME D'ACHAT CLIENT ===\n");
        printf("1. to manage the user's profile: \n");
        printf("2. to manage the user's balance : \n");
        printf("3. to manage the products: \n");
        printf("4. to manage the transactions: \n");
        printf("5. to see all the statistiques: \n");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1 :
                do
                {
                    if (clientCount < 1)
                    {
                        printf("1. to create a profile: \n");
                        printf("2. to update a profile: \n");
                        printf("3. to display the profile: \n");
                        scanf("%d", &choice);   
                        switch (choice)
                        {
                            case 1 :
                                addClient();
                            break;
                            case 2 :
                                updateClient();
                            break;
                            case 3 :
                                displayClient();
                        break;
                        default:
                        break;
                    }
                }             
                } while (choice != 0);
            break;
            case 2: 
                do
                {
                    switch (choice)
                    {
                    case 1 :
                        printf("1. to display the user's balance: \n");
                        scanf("%d", &choice);
                    break;
                    case 2 :
                        printf("2. to add more balance: \n");
                        scanf("%d", &choice);
                    break;
                    case 3 :
                        printf("2. to add more balance: \n");
                        scanf("%d", &choice);
                    break;
                    switch (choice)
                    {
                    case 1 :
                        displayUserBalance();
                    break;
                    case 2 :
                        addBalance();
                    break;
                    default:
                        break;
                    }
                    default:
                        break;
                    }
                } while (choice != 0);
            break;
            case 3: 
                do
                {
                    switch (choice)
                    {
                    case 1 :
                        printf("1. to display the products: (Products-Value-stock availibility)");
                        scanf("%d", &choice);
                    break;
                    case 2 :
                        printf("2. to search for a specific product: ");
                        scanf("%d", &choice);
                    break;
                    case 3 :
                        printf("2. to sort the products: ");
                        scanf("%d", &choice);
                        do
                        {
                            switch (choice)
                            {
                            case 1 :
                                printf("1. To sort by name");
                                scanf("%d", &choice);
                                break;
                            case 2 :
                                printf("1. To sort by name");
                                scanf("%d", &choice);
                            break;
                            default:
                                break;
                            }
                        } while (choice != 0);
                        

                    break;
                    case 4 :
                        printf("2. to display all products info: ");
                        scanf("%d", &choice);
                    break;
                    default:
                        break;
                    }
                } while (choice != 0);
            break;
            case 4 : 
                do
                {
                    switch (choice)
                    {
                    case 1 :
                        printf("1. the search for a specific a");
                        scanf("%d", &choice);
                    break;
                    case 2 :
                        printf("2. to search for a specific product: ");
                        scanf("%d", &choice);
                    break;
                    case 3 :
                        printf("2. to sort the products: ");
                        scanf("%d", &choice);
                    break;
                    case 4 :
                        printf("2. to display all products info: ");
                        scanf("%d", &choice);
                    break;
                    default:
                        break;
                    }
                } while (choice != 0);
            break;
            case 5 :
                
            break;
            default:
                break;
            }
    } while (choice != 0);
}
