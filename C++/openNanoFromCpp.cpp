#include <iostream>
#include <cstdlib> // system

using namespace std;


int main() {
   
   
	std::string filename = "textFile.txt";
	std::string cmd = "nano " + filename;
	system(cmd.c_str());
	// read from filename
	   
 
    return 0;
}

