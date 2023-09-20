#include "DBManager.h"
#include "sylar/config.h"
#include "sylar/db/mysql.h"
using namespace db_server;
sylar::ConfigVar<std::string>::ptr g_mysql_host = sylar::Config::Lookup("mysql.host", (std::string)"127.0.0.1", "mysql host");
sylar::ConfigVar<std::string>::ptr g_mysql_port = sylar::Config::Lookup("mysql.port", (std::string)"3306", "mysql port");
sylar::ConfigVar<std::string>::ptr g_mysql_user = sylar::Config::Lookup("mysql.port", (std::string)"user", "mysql user");
sylar::ConfigVar<std::string>::ptr g_mysql_password = sylar::Config::Lookup("mysql.port", (std::string)"123456", "mysql password");
sylar::ConfigVar<std::string>::ptr g_mysql_dbname = sylar::Config::Lookup("mysql.port", (std::string)"game_project", "mysql dbname");

DBManager::DBManager(){
    
}

DBManager::~DBManager(){
    
}

bool DBManager::Init(){
    std::map<std::string, std::string> params;
    params["host"] = g_mysql_host->getValue();
    sylar::MySQL::ptr mysql(new sylar::MySQL(params));
    // if(!mysql->connect()) {
    //     std::cout << "connect fail" << std::endl;
    //     return;
    // }
}