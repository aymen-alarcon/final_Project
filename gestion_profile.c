#include "gestion_profile.h"
#include <stdio.h>
#include <string.h>

struct clients client[];

void addClient(){
    printf("can you please enter your first name: ");
    scanf("%s", client[1].firstname);
    printf("can you please enter your last name: ");
    scanf("%s", client[1].firstname);
    client[1].id = 0;

    for (int i = 0; i < 1; i++)
    {
        printf("%s", client[i]);
    }
}

void updateClient(){

}

void displayClient(){
    
}