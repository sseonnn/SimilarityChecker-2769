#include "gmock/gmock.h"
#include "similarity_checker.cpp"

TEST(SimilarityChecker, LengthMaxScore) {
	SimilarityChecker checker;

	EXPECT_DOUBLE_EQ(60.0, checker.getScore("ASD", "DSA"));
}

TEST(SimilarityChecker, LengthZeroScore) {
	SimilarityChecker checker;

	EXPECT_DOUBLE_EQ(0, checker.getScore("A", "BB"));
}

TEST(SimilarityChecker, LengthPartialScore20) {
	SimilarityChecker checker;

	EXPECT_DOUBLE_EQ(20.0, checker.getScore("AAABB", "BAA"));
}

TEST(SimilarityChecker, LengthPartialScore30) {
	SimilarityChecker checker;

	EXPECT_DOUBLE_EQ(30.0, checker.getScore("AA", "AAE"));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}