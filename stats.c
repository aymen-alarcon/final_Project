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

int historyStatistics() {
    sqlite3 *db;
    sqlite3_stmt *stmt;

    if (sqlite3_open("database.db", &db) != 0) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        return 1;
    }

    const char *sql = "SELECT * FROM history;";
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != 0) {
        fprintf(stderr, "Failed to prepare statement: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }

    printf("Viewing history statistics...\n");
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        printf("ID=%d, Date=%s, ProduitID=%d, Prix=%.2f\n",
               sqlite3_column_int(stmt, 0),
               sqlite3_column_text(stmt, 1),
               sqlite3_column_int(stmt, 2),
               sqlite3_column_double(stmt, 3));
    }

    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return 0;
}