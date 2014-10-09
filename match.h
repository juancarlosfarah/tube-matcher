#ifndef MATCH_H
#define MATCH_H
	void match_strings(std::string, std::ifstream&);
	void get_fully_unmatched_strings(std::string, std::ifstream&);
	bool is_string_match(std::string, std::string);
	bool is_char_match(char, std::string);
	bool is_fully_unmatched(std::string, std::string);
#endif
