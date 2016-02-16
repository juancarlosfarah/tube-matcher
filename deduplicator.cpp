#include <string>

using namespace std;

string Deduplicate(string s) {

	string deduped = "";

	for (int i = 0; i < s.length(); ++i) {
		char c = tolower(s[i]);
		size_t index = deduped.find(c);
		if (index == string::npos) {
			deduped += c;
		}
	}

	return deduped;
}
