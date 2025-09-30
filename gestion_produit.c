#include "gestion_produit.h"
struct Produit products[10] = {
        {1, "Ordinateur Portable", "Electronique", 599.99, 15, "Laptop performant 16 Go RAM"},
        {2, "Smartphone", "Electronique", 299.99, 30, "Telephone Android 128 Go"},
        {3, "Casque Audio", "Accessoires", 49.99, 50, "Casque sans fil Bluetooth"},
        {4, "Television 4K", "Electronique", 799.99, 8, "TV UHD 55 pouces"},
        {5, "Clavier Mecanique", "Accessoires", 89.99, 25, "Clavier RGB retroeclaire"},
        {6, "Souris Gaming", "Accessoires", 39.99, 40, "Souris ergonomique haute precision"},
        {7, "Imprimante", "Bureautique", 129.99, 12, "Imprimante Wi-Fi multifonction"},
        {8, "Disque SSD 1To", "Stockage", 109.99, 20, "Disque SSD rapide pour PC"},
        {9, "Montre Connectee", "Electronique", 149.99, 18, "Montre intelligente avec capteurs sante"},
        {10, "Camera de Securite", "Maison", 59.99, 22, "Camera Wi-Fi avec vision nocturne"}
};

void displayProducts(){
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

void searchProduct(){

}
void sortProductsMenu(){

}
void displayAllProductsInfo(){
        
}
