//============================================================================
// Name        : writeToFIle.cpp
// Author      : Viope C++ course
// Version     :
// Copyright   : Your copyright notice
// Description : Writing to a file in C++
//============================================================================

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	string row;
	char character;

	// open story.txt for reading
	ifstream read("/home/sdfe/1_Personal_Work/cpp_workspace/PasswordManager/src/story.txt");

	// if reading is successful
	if (read.is_open()) {
	// read one string type value from the file
	read >> row;
	cout << "row: " << row << endl;
	// read one character from thefile with get-functioan
	read.get(character); // same as 'read >> character;'
	cout << "character: " << "->" << character << "<-" << endl;

	// read the rest of the rows
	while (read >> row) {
		cout << "row: " << row << endl;
	}

	} else {
	cout << "Unable to open the file!" << endl;
	exit(-1);
	}

	return 0;
}
