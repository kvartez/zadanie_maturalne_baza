#include <iostream>
#include "excersises/ex65_3.h"
using namespace std;
void linker(char* example_h ,char* file){
	
	if(!example_h){
			cerr << "Error-Undefined example";
        exit(1);
	}else if(strcmp(example_h,"65_3")==0){
		ex65_3 kva;
    	kva.start(file);
    	exit(0);
	}
	cout<<"Error-No such example";
	exit(1);
}

