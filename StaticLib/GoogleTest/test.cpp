#include "pch.h"
#include "Sphere.h"

TEST(IsInside, Basic) {
	Sphere s(0, 0, 0, 5);
	EXPECT_TRUE(s.IsInside(DirectX::XMFLOAT3(3, 4, 0)));

}

TEST(IsInside, MultipleInsideTestCases)
{
	/* Your code to set up the sphere and point */
	Sphere sphere(0, 0, 0, 5);
	DirectX::XMFLOAT3 point(3, 4, 0);
	// check result is true
	EXPECT_TRUE(sphere.IsInside(point));

	/* Your code to set up the sphere and point */
	sphere = Sphere(2, 3, -1, 10);
	point = DirectX::XMFLOAT3(5, 6, -2);
	EXPECT_TRUE(sphere.IsInside(point));
	// check result is true
	
}