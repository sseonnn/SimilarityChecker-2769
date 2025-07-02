#include "gmock/gmock.h"
#include "similarity_checker.cpp"

using namespace testing;

class SimilarityCheckerFixture : public Test {
public:
	SimilarityChecker checker;
	void testScore(double actual, string a, string b) {
		EXPECT_DOUBLE_EQ(actual, checker.getScore(a, b));
	}
};

TEST_F(SimilarityCheckerFixture, LengthMaxScore) {
	testScore(60.0, "ASD", "DSA");
}

TEST_F(SimilarityCheckerFixture, LengthZeroScore) {
	testScore(0, "A", "BB");
}

TEST_F(SimilarityCheckerFixture, LengthPartialScore20) {
	testScore(20.0, "AAABB", "BAA");
}

TEST_F(SimilarityCheckerFixture, LengthPartialScore30) {
	testScore(30.0, "AA", "AAE");
}

TEST_F(SimilarityCheckerFixture, LengthDoubleScore) {
	testScore(0, "AA", "AAAAA");
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}