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
string split_string(string);

int main() {
	
	string match = "";
	string printable_match = "";
	ifstream ifs;

	print_welcome_message();
	match = get_characters_to_match();
	printable_match = split_string(match);
	
	open_input_file(ifs, "input.txt");
	cout << "The stations that do contain ALL" << endl;
	cout << "of the characters outlined below" << endl;
	cout << printable_match << endl;
	cout << "in their names are the following:" << endl;
	cout << "=================================" << endl; 
	match_strings(match, ifs);
	cout << endl;
	close_input_file(ifs);	

	open_input_file(ifs, "input.txt");
	cout << "The stations that don't contain ANY" << endl;
	cout << "of the characters outlined below" << endl;
	cout << printable_match << endl;
	cout << "in their names are the following:" << endl;
	cout << "=================================" << endl; 
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
	getline(cin, match);
	cout << endl;
	return match;
}

/* function: split_string
 * ======================
 * transform string into a string of its
 * characters separated by a vertical bar
 */
string split_string(string s) {
	string split;
	for (unsigned int i = 0; i < s.length(); i++) {
		char c = s[i];
		if (i == 0) {
			split += c;
		} else {
			split += " | ";
			split += c;
		}
	}

	return split;
}









