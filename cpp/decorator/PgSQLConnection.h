#ifndef CPP_PATTERNS_PGSQLCONNECTION_H
#define CPP_PATTERNS_PGSQLCONNECTION_H

#include "DbConnection.h"

class PgSQLConnection : public DbConnection
{
public:
    PgSQLConnection();
    ~PgSQLConnection();
    void connect();
    void setParams();
    std::string getParams();

};


#endif //CPP_PATTERNS_PGSQLCONNECTION_H
