#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "base/inherited.h"
using namespace std;

class ex65_3 : public file
{
    int num1,num2,result;
    int nwd(int a, int b);
    
    virtual void math();
    
};
  

