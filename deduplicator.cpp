#include <string>

using namespace std;

string Deduplicate(string s) {

	string deduped = "";
	
	for (char c : s) {
		c = tolower(c);
		size_t index = deduped.find(c);
		if (index == string::npos) {
			deduped += c;
		}
	}

	return deduped;
} 
