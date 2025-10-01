#include "gestion_profile.h"
#include <stdio.h>
#include <string.h>

struct clients client[];
int clientCount = 0;

void addClient()
{
    printf("can you please enter your first name: ");
    scanf("%s", client[clientCount].firstname);
    printf("can you please enter your last name: ");
    scanf("%s", client[clientCount].lastname);
    client[1].id = 0;
    sprintf(client[clientCount].email, "%s.%s@gmail.com", client[clientCount].firstname, client[clientCount].lastname);
    clientCount++;
    displayClient();
}

void updateClient()
{
    displayClient();

    printf("Enter the new first name: ");
    scanf("%s", client[0].firstname);
    printf("Enter the new last name: ");
    scanf("%s", client[0].lastname);
    sprintf(client[0].email, "%s.%s@gmail.com", client[0].firstname, client[0].lastname);

    displayClient();
}

void displayClient()
{
    for (int i = 0; i < clientCount; i++)
    {
        printf("Client #%d: %s %s with email %s\n",
               client[i].id,
               client[i].firstname,
               client[i].lastname,
               client[i].email);
    }
}