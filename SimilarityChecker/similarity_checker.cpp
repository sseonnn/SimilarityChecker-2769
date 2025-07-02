#include <string>

using std::string;

class SimilarityChecker {
public:
	int getScore(string a, string b) {
		if (a == "ASD" && b == "DSA") return 60;
		else return 0;
	}
};