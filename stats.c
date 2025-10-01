#include "stats.h"
#include "gestion_produit.h"
#include <stdio.h>
#include "sqlite3.h"


void viewStatistics() {
    printf("Viewing statistics...\n");
    int outofstockCount = 0;
    int lowStockCount = 0;
    int sufficientStockCount = 0;
    for (int i = 0; i < 10; i++)
    {
        if (products[i].stock <= 0)
        {
            outofstockCount++;
        }
        if (products[i].stock <= 3)
        {
            lowStockCount++;
        }
        if (products[i].stock > 3)
        {
            sufficientStockCount++;
        }   
    }

    printf("Number of products out of stock: %d\n", outofstockCount);
    printf("Number of products with low stock (3 or less): %d\n", lowStockCount);
    printf("Number of products with sufficient stock (more than 3): %d\n", sufficientStockCount);

}