#include <string>

using namespace std;

string deduplicate(string s) {
	string deduplicated = "";
	
	for (unsigned int i = 0; i < s.length(); i++) {
		size_t index = deduplicated.find(s[i]);
		if (index == std::string::npos) {
			char c = tolower(s[i]);
			deduplicated += c;
		}
	}

	return deduplicated;
} 
