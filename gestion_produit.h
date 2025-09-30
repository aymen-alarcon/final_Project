#include <stdio.h>

typedef struct {
    int idProduit;                     
    char nom[30];                 
    char categorie[30];     
    float prix;                        
    int stock;                         
    char description[30];        
} Produit;
/*
    Produit produits[10] = {
        {1, "Ordinateur Portable", "Électronique", 599.99, 15, "Laptop performant 16 Go RAM"},
        {2, "Smartphone", "Électronique", 299.99, 30, "Téléphone Android 128 Go"},
        {3, "Casque Audio", "Accessoires", 49.99, 50, "Casque sans fil Bluetooth"},
        {4, "Télévision 4K", "Électronique", 799.99, 8, "TV UHD 55 pouces"},
        {5, "Clavier Mécanique", "Accessoires", 89.99, 25, "Clavier RGB rétroéclairé"},
        {6, "Souris Gaming", "Accessoires", 39.99, 40, "Souris ergonomique haute précision"},
        {7, "Imprimante", "Bureautique", 129.99, 12, "Imprimante Wi-Fi multifonction"},
        {8, "Disque SSD 1To", "Stockage", 109.99, 20, "Disque SSD rapide pour PC"},
        {9, "Montre Connectée", "Électronique", 149.99, 18, "Montre intelligente avec capteurs santé"},
        {10, "Caméra de Sécurité", "Maison", 59.99, 22, "Caméra Wi-Fi avec vision nocturne"}
}
    for (int i = 0; i < 10; i++) {
        printf("ID: %d\nNom: %s\nCategorie: %s\nPrix: %.2f\nStock: %d\nDescription: %s\n\n",
               produits[i].idProduit,
               produits[i].nom,
               produits[i].categorie,
               produits[i].prix,
               produits[i].stock,
               produits[i].description);
    }

*/