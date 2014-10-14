#ifndef MATCH_H
#define MATCH_H

	/* function: GetPerfectMatches
 	 * ===========================
 	 * takes a string and an input file stream
 	 * and prints the lines in that file that
 	 * contain all the characters in the string.
 	 */
	void GetPerfectMatches(
		std::string,
		std::ifstream&
	);
	
	/* function: GetPerfectUnmatches
 	 * =============================
 	 * takes a string and an input file stream
 	 * and prints the lines in that file that 
 	 * contain no characters in the string.
 	 */ 
	void GetPerfectUnmatches(
		std::string s,
		std::ifstream& file
	);

	/* function: IsPerfectMatch
 	 * ========================
 	 * takes two strings and compares them to
 	 * see if the characters in the first one
 	 * are all in the second.
 	 */
	bool IsPerfectMatch(
		std::string matcher,
		std::string matchee
	);
	
	/* function: IsCharInString
 	 * ========================
 	 * takes a character and a string and
 	 * returns true if the character is
 	 * in the string.
 	 */
	bool IsCharInString(
		char c,
		std::string s 
	);


	/* function: IsPerfectUnmatch
 	 * ==========================
 	 * takes two strings and compares them
 	 * to see if none of the characters of
 	 * the first string are in the second.
 	 */ 
	bool IsPerfectUnmatch(
		std::string matcher,
		std::string matchee
	);
#endif
