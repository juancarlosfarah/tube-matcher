#include <iostream>
#include <fstream>
#include <string>
#include "match.h"
#include "deduplicator.h"

using namespace std;

void GetPerfectMatches(string s, ifstream& ifs) {

	string line;

	while (getline(ifs, line)) {
		string deduped = Deduplicate(line);
		if (IsPerfectMatch(s, deduped)) {
			cout << line << endl;
		}
	}

	return;
}

void GetPerfectUnmatches(string s, ifstream& ifs) {
	string line;

	while (getline(ifs, line)) {
		string deduped = Deduplicate(line);
		if (IsPerfectUnmatch(s, deduped))
			cout << line << endl;
	}

	return;
}

bool IsPerfectMatch(string matcher, string matchee) {

	for (int i = 0; i < matcher.length(); i++) {
		if (!IsCharInString(matcher.at(i), matchee))
			return false;
	}

	return true;
} 

bool IsCharInString(char c, string s) {
	for (int i = 0; i < s.length(); i++) {
		char c1 = tolower(c);
		char c2 = tolower(s.at(i));
		if (c1 == c2)
			return true; 
	}

	return false;	
}

bool IsPerfectUnmatch(string matcher, string matchee) {	
	for (int i = 0; i < matcher.length(); i++) {
		if (IsCharInString(matcher.at(i), matchee))
			return false;
	}

	return true;
}
