#pragma once
#include <DirectXMath.h>

using namespace std;
class Sphere
{
public:
	DirectX::XMFLOAT3 center;
	float radius;
	Sphere(float x, float y, float z, float r) {
		center = DirectX::XMFLOAT3(x, y, z);
		radius = r;
	}
};

