/* pqace.h */
#include <string>
class pqace
{
public:
    std::string dbname;
    std::string user; 
    std::string password;
    std::string host;
    std::string port;
    int check(std::string dbname, std::string user, std::string password, std::string host, std::string port);
};