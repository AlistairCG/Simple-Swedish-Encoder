#include <iostream>
#include <string>
#include "sweden.h"
//Alistair Godwin
//Program: Swedishify
//A simple string manipulation into Robbers Language. Made for the community challege #212 on Reddit @ R/dailyprogrammer. 
//Note: I know this isn't that much of a program; but it allows me to practice and keep sharp.


using namespace std;
using namespace language;


int main() {
	char input[200];
	//TODO Menu for user input
	
	cout << "Input a string to be Swedish(ified): ";
	cin.getline(input,199);
	swedishify(input);
	cout << "\n Press any key to end this program \n";
	getchar();
	
	return 0;
}



