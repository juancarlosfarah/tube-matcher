#include <iostream>
#include <fstream>
#include <string>
#include "match.h"

using namespace std;

void match_strings(string s, ifstream& ifs) {
	string line;

	while (getline(ifs, line)) {
		if (is_string_match(s, line))
			cout << line << endl;
	}

	return;
}

void get_fully_unmatched_strings(string s, ifstream& ifs) {
	string line;

	while (getline(ifs, line)) {
		if (is_fully_unmatched(s, line))
			cout << line << endl;
	}

	return;
}

bool is_string_match(string matcher, string matchee) {
	for (int i = 0; i < matcher.length(); i++) {
		if (!is_char_match(matcher.at(i), matchee))
			return false;
	}

	return true;
} 

bool is_char_match(char c, string s) {
	for (int i = 0; i < s.length(); i++) {
		char c1 = tolower(c);
		char c2 = tolower(s.at(i));
		if (c1 == c2)
			return true; 
	}

	return false;	
}

bool is_fully_unmatched(string matcher, string matchee) {	
	for (int i = 0; i < matcher.length(); i++) {
		if (is_char_match(matcher.at(i), matchee))
			return false;
	}

	return true;
}
