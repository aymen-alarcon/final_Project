#include "gestion_profile.h"
#include "menu.h"
#include <stdio.h>
#include <string.h>

struct clients client[];
int clientCount = 0;

void addClient(){
    printf("can you please enter your first name: ");
    scanf("%s", client[clientCount].firstname);
    printf("can you please enter your last name: ");
    scanf("%s", client[clientCount].lastname);
    client[1].id = 0;
    sprintf(client[clientCount].email, "%s.%s@gmail.com", client[clientCount].firstname, client[clientCount].lastname);
    clientCount++;
    displayClient();
}

void updateClient(){

}

void displayClient() {
    for (int i = 0; i < clientCount; i++) {
        printf("Client #%d: %s %s - %s\n", 
               client[i].id, 
               client[i].firstname, 
               client[i].lastname, 
               client[i].email);
    }
}