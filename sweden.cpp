#include <iostream>
#include "sweden.h"
#include <ctype.h> 

//Alistair Godwin
using namespace std;

//Function will turn a given string into Robbers langauage. Take any consonant add 'o' + same consonant. 
void language::swedishify(char * inp)
{
		
	for (int i = 0; i < strlen(inp); i++) {
		if (inp[i] != 'a' && inp[i] != 'e' && inp[i] != 'i' && inp[i] != 'o' && inp[i] != 'u' && inp[i] != ' ' && isalpha(inp[i]) ) {
			
			cout << inp[i] << "o";
			isupper(inp[i]) ? ( inp[i] = tolower(inp[i]) ) : inp[i] = inp[i];
			cout << inp[i];
		}
		else {
			cout << inp[i];
		}
	}

}

