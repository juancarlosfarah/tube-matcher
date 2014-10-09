#include <iostream>
#include <fstream>
#include <string>
#include "match.h"

using namespace std;

/* function prototypes */
void print_welcome_message();
void open_input_file(ifstream&, string);
string get_characters_to_match();
void close_input_file(ifstream&);

int main() {
	
	string match = "";
	ifstream ifs;

	print_welcome_message();
	match = get_characters_to_match();

	open_input_file(ifs, "input.txt");
	cout << "The stations that matched are:" << endl;	
	match_strings(match, ifs);
	cout << endl;
	close_input_file(ifs);	

	open_input_file(ifs, "input.txt");
	cout << "The stations that don't contain "
	     << "any of the characters are: " << endl; 
	get_fully_unmatched_strings(match, ifs);	
	close_input_file(ifs);

	cout << endl;
	cout << "Goodbye!\n" << endl;

	return 0;
} 

void print_welcome_message() {

	cout << "\n" << endl;
	cout << "################################################" << endl;
	cout << "# This matches a string of characters with the #" << endl;
	cout << "# names of tube stations that contain all of   #" << endl;
	cout << "# the characters in that string.               #" << endl;
	cout << "#                                              #" << endl;
	cout << "# Author: @juancarlosfarah                     #" << endl;
	cout << "#                                              #" << endl;
	cout << "################################################" << endl;
	cout << "\n" << endl;

	return;
}

void open_input_file(ifstream& ifs, string filename) {

	ifs.open(filename);

	if (ifs.fail()) {
		cerr << "Opening input file failed!" << endl;
	}

	return;
}

void close_input_file(ifstream& ifs) {

	ifs.close();

	return;
}

string get_characters_to_match() {
	string match = "";
	cout << "Enter a string of characters to match." << endl;
	cin >> match;
	cout << endl;
	return match;
}
