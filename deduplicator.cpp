#include <string>

using namespace std;

string Deduplicate(string s) {

	string deduped = "";
	
	for (unsigned int i = 0; i < s.length(); i++) {
		size_t index = deduped.find(s[i]);
		if (index == string::npos) {
			char c = tolower(s[i]);
			deduped += c;
		}
	}

	return deduped;
} 
