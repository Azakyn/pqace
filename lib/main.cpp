#include <iostream>
#include "pqace.h"

int main() {
    pqace pqace;
    pqace.initconnect("testdb", "sammy", "centos", "127.0.0.1", "5432"); // init connection
    pqace.drop("table", "customers"); // delete tables
}