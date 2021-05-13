#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "ex65.h"
using namespace std;

void ex65::math(){
    double  crt = 1;
   	int buf1,buf2,licz;
    for(int i=0;i<1000;++i){
        inFile>>num1;
        inFile>>num2;
        if((((double)num1)/((double)num2))<crt){
        	crt=(double)num1/(double)num2;
        	buf1=num1;
        	buf2=num2;
        	
        	
		}
		
		
		
		if(nwd(num1,num2)==1){
			licz++;
		}
        result+=num1/nwd(num1,num2);
        
    }
    
    cout<<buf1<<" "<<buf2<<endl<<licz<<endl<<result;
    
}
int ex65::nwd(int a, int b)
{
    if(b==0)
        return a;
   return nwd(b, a%b);
}

