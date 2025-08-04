// 메인 함수 안쪽에 temp변수를 만들지 않고 value swap 해주세요.
#include <cstdio>

//#define SWAP(X, Y, TYPE) TYPE temp = v1; v1 = v2; v2 = temp;
//#define SWAP(X, Y, TYPE) {TYPE temp = v1; v1 = v2; v2 = temp;} // temp의 유효 범위 -> 스코프 지정

#define SWAP(X, Y, TYPE) TYPE temp = v1; v1 = v2; v2 = temp;

int main() {

	int v1 = 100;
	int v2 = 200;

	printf("==SWAP 전\n");
	printf("v1 : %d\n", v1); // 100
	printf("v2 : %d\n", v2); // 200

	{ SWAP(v1, v2, int) }
	{ SWAP(v1, v2, int) }

	printf("SWAP 후==\n");
	printf("v1 : %d\n", v1); // 200
	printf("v2 : %d\n", v2); // 100


	return 0;
}