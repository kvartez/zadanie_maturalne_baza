#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "inherited.h"
using namespace std;
void file::start(char* file) {
    inFile.open(file);
    if (!inFile.good())
        {
                cerr << "Error-File cannot be accesed";
                exit(1);
        }
        math();
}
void file::math(){}
file::~file() {
    inFile.close();
}
