#ifndef CPP_PATTERNS_DBCONNECTIONOVERSSH_H
#define CPP_PATTERNS_DBCONNECTIONOVERSSH_H

#include "DecorationDbConnection.h"

class DbConnectionOverSSH : public DecorationDbConnection
{
public:
    DbConnectionOverSSH(DbConnection *dbCon);
    void connect();
    void setParams();
    std::string getParams();
private:
    DbConnection *__dbCon;
};


#endif //CPP_PATTERNS_DBCONNECTIONOVERSSH_H
