#include <string>

using std::string;

class SimilarityChecker {
public:
	double getScore(string a, string b) {
		if (a.size() == b.size()) return MAX_SCORE;
		return getLengthPartialScore(a, b);
	}

private:
	double getLengthPartialScore(string& a, string& b)
	{
		std::pair<int, int> strNum = getWhichLonger(a.size(), b.size());
		double gap = static_cast<double>(strNum.first - strNum.second);
		return getLengthPartialFinalScore(gap, strNum.second);
	}

	std::pair<int, int> getWhichLonger(int aSize, int bSize) {
		int longerStrNum = 0;
		int shorterStrNum = 0;

		if (aSize > bSize) {
			longerStrNum = aSize;
			shorterStrNum = bSize;
		}
		else {
			longerStrNum = bSize;
			shorterStrNum = aSize;
		}

		return { longerStrNum, shorterStrNum };
	}

	double getLengthPartialFinalScore(double gap, int shorterStrNum) {
		return (1 - static_cast<double>(gap / shorterStrNum)) * 60;
	}

	double MAX_SCORE = 60;
};