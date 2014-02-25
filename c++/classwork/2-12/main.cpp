#include <iostream>
#include <string>

#include "countCharacters.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

//I read a sentence and compute statistics
int main()
{
	string sentence; //this is the input
	int alpha;//this is a counter for alphabetic
	int number;//this is a counter for #s
	int punct;//this is a counter for punctuation

	//input
	cout << "Please enter a sentence and press enter: ";
	getline(cin, sentence);//read in an entire line
	//stop at the newline character
	cout << endl;
	cout << "Your sentence was: " << sentence << endl;
	cout << "It was " << sentence.length() << " characters long" << endl;
	//processing
	countCharacters( sentence, alpha, number, punct );
	
	//output
	cout << "ABC's: " << alpha << endl;
	cout << "123's: " << number << endl;
	cout << "!@#'s: " << punct << endl;

	
	return 0;
}

void printStuff(){




