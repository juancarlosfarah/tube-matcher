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
	cout << "Actual Result:   " << Deduplicate(s1) << endl;

	/* Test 2: "Christos Kaplanis" */
	string s2 = "Christos Kaplanis";
	cout << "Test 2: " << s2 << endl;
	cout << "Expected Result: " << "christo kapln" << endl;
	cout << "Actual Result:   " << Deduplicate(s2) << endl;

	/* Test 3: "Juan Carlos Farah lives in the SCR" */
	string s3 = "Juan Carlos Farah lives in the SCR.";
	cout << "Test 3: " << s3 << endl;
	cout << "Expected Result: " << "juan crlosfhivet." << endl;
	cout << "Actual Result:   " << Deduplicate(s3) << endl;
	return 0;

}
