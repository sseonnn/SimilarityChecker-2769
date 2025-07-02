#include <string>

using std::string;

class SimilarityChecker {
public:
	double getScore(string a, string b) {
		if (a.size() == b.size()) return 60;

		int longerStrNum = 0;
		int shorterStrNum = 0;
		if (a.size() > b.size()) {
			longerStrNum = a.size();
			shorterStrNum = b.size();
		}
		else {
			longerStrNum = b.size();
			shorterStrNum = a.size();
		}
		double gap = longerStrNum - shorterStrNum;
		return (1 - (gap / shorterStrNum)) * 60;
	}
};