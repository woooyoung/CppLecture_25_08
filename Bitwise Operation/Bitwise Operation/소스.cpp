// 비트와이즈 연산 -> 비트를 기준으로 연산 -> 기계의 근본에 해당하는 연산
// Bitwise or -> |
// Bitwise and -> &
// Shift ->  <<, >>

// 연산 속도(빠른순으로) : 더하기 + 빼기 - 곱하기 * 나누기 / 
//                       : 정수 연산 실수 연산

#include <cstdio>

int main() {

	int v1 = 1; // 0001
	int v2 = 3; // 0011

	int bitwise_or = v1 | v2;
	printf("v1 | v2 : %d\n", bitwise_or);

	int bitwise_and = v1 & v2;
	printf("v1 & v2 : %d\n", bitwise_and);

	int shift_left = v2 << 1; // 0110
	printf("v2 << 1 : %d\n", shift_left);

	int shift_left2 = v2 << 2; // 1100
	printf("v2 << 2 : %d\n", shift_left2);

	int shift_right = v2 >> 1; // 0001
	printf("v2 >> 1 : %d\n", shift_right);

	/*int v1 = 1;
	int v2 = 2; // 0010

	int bitwise_or = v1 | v2;
	printf("%d\n", bitwise_or);

	int bitwise_and = v1 & v2;
	printf("%d\n", bitwise_and);*/


	return 0;
}