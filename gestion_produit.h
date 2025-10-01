#define GESTION_PRODUIT_H
#include <stdio.h>

struct Produit{
    int idProduit;                     
    char nom[30];                 
    char categorie[30];     
    float prix;                        
    int stock;                         
    char description[300];        
};

extern struct Produit products[10];

void displayProducts();
void searchProduct();
void sortProductsMenuByName();
void sortProductsMenuByNumbers();
void displayAllProductsInfo();
void sortProductsMenuByCategory();