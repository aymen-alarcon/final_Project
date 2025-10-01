#include "gestion_produit.h"
#include <string.h>


struct Produit products[10] = {
        {1, "Ordinateur Portable", "Electronique", 599.99, 5, "Laptop performant 16 Go RAM"},
        {2, "Smartphone", "Electronique", 299.99, 3, "Telephone Android 128 Go"},
        {3, "Casque Audio", "Accessoires", 49.99, 5, "Casque sans fil Bluetooth"},
        {4, "Television 4K", "Electronique", 799.99, 8, "TV UHD 55 pouces"},
        {5, "Clavier Mecanique", "Accessoires", 89.99, 5, "Clavier RGB retroeclaire"},
        {6, "Souris Gaming", "Accessoires", 39.99, 4, "Souris ergonomique haute precision"},
        {7, "Imprimante", "Bureautique", 129.99, 1, "Imprimante Wi-Fi multifonction"},
        {8, "Disque SSD 1To", "Stockage", 109.99, 10, "Disque SSD rapide pour PC"},
        {9, "Montre Connectee", "Electronique", 149.99, 8, "Montre intelligente avec capteurs sante"},
        {10, "Camera de Securite", "Maison", 59.99, 7, "Camera Wi-Fi avec vision nocturne"}
};

void displayProducts(){
    for (int i = 0; i < 10; i++) {
        printf("ID: %d\nNom: %s\nPrix: %.2f\nStock: %d\n\n",
               products[i].idProduit,
               products[i].nom,
               products[i].prix,
               products[i].stock);
    }
}

void searchProduct(){
        char search[30];
        printf("Enter product name to search: ");
        scanf("%s", &search);

        for (int i = 0; i < 10; i++)
        {
                if (strcmp(products[i].nom, search) == 0)
                {
                        printf("Product found:\n");
                        printf("ID: %d\nNom: %s\nCategorie: %s\nPrix: %.2f\nStock: %d\nDescription: %s\n",
                               products[i].idProduit,
                               products[i].nom,
                               products[i].categorie,
                               products[i].prix,
                               products[i].stock,
                               products[i].description);
                }
        }
}
void sortProductsMenuByNumbers(){
        for (int i = 0; i < 10; i++)
        {
                for (int a = i + 1; a < 10; a++)
                {
                        if (products[i].prix > products[a].prix)
                        {
                                struct Produit temp = products[i];
                                products[i] = products[a];
                                products[a] = temp;
                        }                                
                }
        }
                
        for (int b = 0; b < 10; b++) {
                printf("ID: %d\nNom: %s\nPrix: %.2f\nStock: %d\n\n", products[b].idProduit, products[b].nom, products[b].prix, products[b].stock);
        }
}

void sortProductsMenuByName(){
        for (int i = 0; i < 10; i++)
        {
                for (int a = i + 1; a < 10; a++)
                {
                        if (strcmp(products[i].nom, products[a].nom) > 0)
                        {
                                struct Produit temp = products[i];
                                products[i] = products[a];
                                products[a] = temp;
                        }                                
                }
                printf("ID: %d\nNom: %s\nPrix: %.2f\nStock: %d\n\n", products[i].idProduit, products[i].nom, products[i].prix, products[i].stock);
        }
}

void displayAllProductsInfo(){
        for (int i = 0; i < 10; i++) {
                printf("ID: %d\nNom: %s\nCategorie: %s\nPrix: %.2f\nStock: %d\nDescription: %s\n\n",
                        products[i].idProduit,
                        products[i].nom,
                        products[i].categorie,
                        products[i].prix,
                        products[i].stock,
                        products[i].description);
        }
}
