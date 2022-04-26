#include <iostream>
#include <pqxx/pqxx>
#include <string>

using namespace std;
using namespace pqxx;
using std::string;

int pqace::check(string dbname, string user, string password, string host, string port) {
    try {
        connection C("dbname = " + dbname + " user = " + user + " password =" + password + " \
        hostaddr =" + host + " port = " + port);
        if (C.is_open()) {
            cout << "Opened database successfully: " << C.dbname() << endl;
        } else {
            cout << "Can't open database" << endl;
            return 1;
        }
        C.disconnect ();
    } catch (const std::exception &e) {
        cerr << e.what() << std::endl;
        return 1;
    }
};