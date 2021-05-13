#include <iostream>
#include "excersises/ex65.h"
using namespace std;
void linker(char* example_h ,char* file){
	
	if(!example_h){
			cerr << "Error-Undefined example";
        exit(1);
	}else if(strcmp(example_h,"65")==0){
		ex65 kva;
    	kva.start(file);
    	exit(0);
	}
	cout<<"Error-No such example";
	exit(1);
}

