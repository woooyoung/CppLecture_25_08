// 오버로드 : 동일한 이름을 갖고있지만 다른 동작을 하게 만드는 것
// 오버로딩 : 리턴타입, 파라미터의 갯수와 타입에 따라서 함수를 구분할 수 있다.
// -> 클래스 내부에서도 동일하게 적용된다. 클래스 내부의 함수도 동일
// 생성자(함수취급) 도 동일 -> 클래스가 (모양이 다른) 여러개의 생성자를 가질 수 있다
#include <cstdio>

int sum(int a, int b) {
	printf("sum(int,int)\n");
	return a + b;
}

double sum(int c, double d) {
	printf("sum(int,double)\n");
	return c + d;
}

int sum(int a, int b, int c) {
	printf("sum(int,int,int)\n");
	return a + b + c;
}

int main() {

	/*if (3 + 3 + 3 == 9) {
		printf("o1");
	}

	if (3.3 + 3.3 + 3.3 == 9.9) {   ----> 부동소수점 관련 검색, 정수와 실수의 저장방식이 다르다
		printf("o2");
	} */

	int rs = sum(100, 200);
	printf("rs : %d\n", rs);

	rs = sum(300, 400, 500);
	printf("rs : %d\n", rs);

	float f = sum(100, 3.14);
	printf("f : %f\n", f);

	//rs = sum(100, 200,300);
	//printf("rs : %d\n", rs);

	return 0;
}