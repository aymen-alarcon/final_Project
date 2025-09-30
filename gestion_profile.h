#ifndef GESTION_PROFILE_H
#define GESTION_PROFILE_H
#include <stdio.h>
struct clients{
    int id;
    char firstname[30];
    char lastname[30];
    char email[30];
};

extern struct  clients client[1];

void addClient();
void updateClient();
void displayClient();

#endif