#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
class file {  
	protected:
    	ifstream inFile;      
		virtual void math();
    public:
		virtual void start(char* file);
        ~file();
        
};

