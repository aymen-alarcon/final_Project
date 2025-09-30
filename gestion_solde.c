#include "gestion_solde.h"
#include "gestion_profile.h"
#include <stdio.h>

struct clients client[];

void addBalance(){
        float amount;
        printf("Enter amount to add: ");
        scanf("%f", &amount);

        client[1].balance = client[1].balance + amount;
        printf("New balance: %.2f\n", client[1].balance);
} 

void displayUserBalance(){
    printf("New balance: %.2f\n", client[1].balance);
}