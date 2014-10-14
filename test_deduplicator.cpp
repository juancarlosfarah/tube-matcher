#include <iostream>
#include <string>
#include "deduplicator.h"

using namespace std;

int main() {
	cout << "Testing function Deduplicate():" << endl;

	/* Test 1: "Juan Carlos Farah" */
	string s1 = "Juan Carlos Farah";
	cout << "Test 1: " << s1 << endl;
	cout << "Expected Result: " << "juan crlosfh" << endl;
	cout << "Actual Result: " << Deduplicate(s1) << endl;

	/* Test 2: "Christos Kaplanis" */
	string s2 = "Christos Kaplanis";
	cout << "Test 2: " << s2 << endl;
	cout << "Expected Result: " << "christo kapln" << endl;
	cout << "Actual Result: " << Deduplicate(s2) << endl;

	return 0;

}
