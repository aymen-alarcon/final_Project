#ifndef GESTION_PROFILE_H
#define GESTION_PROFILE_H

struct clients
{
    int id;
    char firstname[30];
    char lastname[30];
    char email[30];
    float balance;
};

extern struct clients client[1];
extern int clientCount;

void addClient();
void updateClient();
void displayClient();

#endif