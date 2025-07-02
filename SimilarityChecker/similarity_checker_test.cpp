#include "gmock/gmock.h"
#include "similarity_checker.cpp"

TEST(SimilarityChecker, LengthMaxScore) {
	SimilarityChecker checker;

	EXPECT_EQ(60, checker.getScore("ASD", "DSA"));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}