#include <iostream>
#include "pqace.h"

int main() {
    pqace pqace;
    pqace.check("testdb", "sammy", "centos", "127.0.0.1", "5432");
}