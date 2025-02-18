#include "pch.h"
#include "Sphere.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(TestCaseName, TestName2) {
	Sphere s(0, 0, 0, 3);
	EXPECT_EQ(s.center.x, 1);
}
