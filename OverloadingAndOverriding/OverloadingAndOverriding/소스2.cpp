#define _CRT_SECURE_NO_WARNINGS
// 연산자 오버로딩
// + - * / -> 기본 자료형에만 유효한 연산자
// 기본 타입이 아닌데 이걸 어떻게 연산해?
#include <cstdio>
#include <cstring>

class Vector{
public:
	float X;
	float Y;

	Vector() {
		X = 0.0f;
		Y = 0.0f;
	}

	Vector(float x, float y) {
		this->X = x;
		this->Y = y;
	}

	void printInfo(float x, float y) {
		printf("%.2f, %.2f\n", x, y);
	}
};

// 벡터 덧셈
Vector operator+(Vector& v1, Vector& v2) { // 연산자 오버로딩 : 정적으로 할당(스택얼로케이티드)했을 때만 동작한다.
	return Vector(v1.X + v2.X, v1.Y + v2.Y);
}

int main() {

	Vector v1 = Vector(100,200);
	Vector v2 = Vector(1,2);

	Vector v3 = v1 + v2; 

	v3.printInfo(v3.X,v3.Y);

	return 0;
}