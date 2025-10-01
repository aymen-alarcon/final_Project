#include "connection.h"
#include "sqlite3.h"
#include <stdio.h>             

sqlite3* connection(){
    sqlite3 *db;
    char *err_msg = 0;
    
    int rc = sqlite3_open("database.db", &db);
    
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    const char *sql_create =
        "CREATE TABLE IF NOT EXISTS history("
        "ID INTEGER PRIMARY KEY, "
        "date TIMESTAMP, "
        "ProduitID INTEGER,"
        "prix REAL"
        ")";

        return db;
}