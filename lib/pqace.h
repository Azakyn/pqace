/* pqace.h */
#include <string>
using std::string;


class pqace
{
public:
    int initconnect(string dbname, string user, string password, string host, string port);
    int drop(string type, string name);
};