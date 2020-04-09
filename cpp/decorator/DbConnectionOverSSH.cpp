#include "DbConnectionOverSSH.h"

void DbConnectionOverSSH::connect()
{
    std::cout << " this is connect over ssh \n ";
    this->__dbCon->connect();
}

DbConnectionOverSSH::DbConnectionOverSSH(DbConnection *dbCon)
{
    this->__dbCon = dbCon;
}

void DbConnectionOverSSH::setParams()
{

}

std::string DbConnectionOverSSH::getParams()
{
    return std::string();
}
