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

	bool IsInside(DirectX::XMFLOAT3 point) {
		float dx = center.x - point.x;
		float dy = center.y - point.y;
		float dz = center.z - point.z;
		return dx * dx + dy * dy + dz * dz <= radius * radius;
	}
};

