#include "common.h"
#include "decorator/PgSQLConnection.h"
#include "decorator/DbConnectionOverSSH.h"

int main()
{
    DbConnection *db = new PgSQLConnection();
    db->connect();

    db = new DbConnectionOverSSH(db);
    db->connect();

    return 0;
}