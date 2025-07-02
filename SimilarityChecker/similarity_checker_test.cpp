#include "gmock/gmock.h"
#include "similarity_checker.cpp"

TEST(SimilarityChecker, chekTest) {
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}