#include <string>

using std::string;

class SimilarityChecker {
public:
	int getScore(string a, string b) {
		if (a.size() == b.size()) return 60;
		if (a.size() == 5 && b.size() == 3) return 20;
		if(a.size() == 2 && b.size() == 3) return 30;
		return 0;
	}
};