#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Vector3 {
public:
	float X;
	float Y;
	float Z;

	Vector3() {
		X = 0.0f;
		Y = 0.0f;
		Z = 0.0f;
	}

	Vector3(float x, float y, float z) {
		this->X = x;
		this->Y = y;
		this->Z = z;
	}

	void printInfo(float x, float y, float z) {
		printf("(%.2f, %.2f, %.2f)\n", x, y, z);
	}
};

// 벡터 * 정수 
Vector3 operator*(Vector3& v, float a) {
	return Vector3(v.X * a, v.Y * a, v.Z * a);
}

int main() {

	Vector3 v = Vector3(10, 20, 30);

	Vector3 rs = v * 10;

	rs.printInfo(rs.X, rs.Y, rs.Z);

	Vector3 v2 = Vector3(1, 1, 1);

	rs = v2 * 10;

	rs.printInfo(rs.X, rs.Y, rs.Z);

	return 0;
}