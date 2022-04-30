#include <iostream>
#include <pqxx/pqxx>
#include <string>
#include "pqace.h"

using namespace std;
using namespace pqxx;
using std::string;

string dbname_pub;
string user_pub;
string password_pub;
string host_pub;
string port_pub;

int pqace::initconnect(string dbname, string user, string password, string host, string port) {
    try {
        connection C("dbname = " + dbname + " user = " + user + " password =" + password + " \
        hostaddr =" + host + " port = " + port);
        dbname_pub = dbname;
        user_pub = user;
        password_pub = password;
        host_pub = host;
        port_pub = port;
        if (C.is_open()) {
            cout << "Opened database successfully: " << C.dbname() << endl;
        } else {
            cout << "Can't open database" << endl;
            C.disconnect ();
            return 1;
        }
    } catch (const std::exception &e) {
        cerr << e.what() << std::endl;
        return 1;
    }
return 1;
};

int pqace::drop(string type, string name) {
    try {
        connection C("dbname = " + dbname_pub + " user = " + user_pub + " password =" + password_pub + " \
        hostaddr =" + host_pub + " port = " + port_pub);
        work W(C);
        string sql = "drop " + type + " " +name;
        W.exec( sql );
        W.commit();
        cout << type << " " << name << " deleted successfully" << endl;
        return 1;
    } catch (const std::exception &e) {
        cerr << e.what() << std::endl;
        return 1;
return 1;
}
};