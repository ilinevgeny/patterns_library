#ifndef CPP_PATTERNS_DBCONNECTION_H
#define CPP_PATTERNS_DBCONNECTION_H

#include "../common.h"
class DbConnection
{
public:
    virtual void connect() = 0;
    virtual void setParams() = 0;
    virtual std::string getParams() = 0;
};

#endif //CPP_PATTERNS_DBCONNECTION_H
