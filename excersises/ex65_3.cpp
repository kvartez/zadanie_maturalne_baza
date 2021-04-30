#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "ex65_3.h"
using namespace std;

void ex65_3::math(){
    
    for(int i=0;i<1000;++i){
        inFile>>num1;
        inFile>>num2;
        result+=num1/nwd(num1,num2);
        
    }
    
    cout<<result;
    
}
int ex65_3::nwd(int a, int b)
{
    if(b==0)
        return a;
   return nwd(b, a%b);
}

