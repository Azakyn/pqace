# pqace
Trying to create a cpp libary based on pqxx for my college mini-project.
## Requirements:
**C++14**(201402), **PostgreSQL** 13.5, **libpqxx** 6.4.7, **g++ (GCC)** 8.5.0 20210514;
## How to install this libary?
* Clone this repo:
> git clone https://github.com/Azakyn/pqace.git
* Copy libpqace.a to /usr/lib dir:
> [azaky@localhost lib]$ sudo cp libpqace.a /usr/lib
* Copy pqace.h to /usr/include dir:
> [azaky@localhost lib]$ sudo cp pqace.h /usr/include

## How to use it?
* add this line in the begining of your code:
> #include <pqace.h>
* call functions, for example:
> check("db", "sammy", "sammy", "127.0.0.1", "5432");
* And compile with -lpqace -lpqxx -lpq keys (example for g++):
> g++ your_prog.cpp -lpqace -lpqxx -lpq
* Then run:
> ./a.out

## Congratulations!
This is **_all_** that I can show you here. More info about functions include **doc.md** in other dir. 
