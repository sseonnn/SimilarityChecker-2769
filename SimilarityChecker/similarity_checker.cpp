#include <string>

using std::string;

class SimilarityChecker {
public:
	int getScore(string a, string b) {
		if (a.size() == b.size()) return 60;
		return 0;
	}
};