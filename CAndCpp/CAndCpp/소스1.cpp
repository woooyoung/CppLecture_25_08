#include <cstdio>

// 나의 TODO : 회사의 erp 시스템 구축
// 키, 몸무게, 시력, 머리색, 눈동자색, 주민번호, 휴대폰번호, 나이, 직업, 연봉, 이름, 혈액형, 결혼여부, 자녀유무
// 키, 주민번호, 휴대폰번호, 나이, 연봉, 이름, 혈액형, 결혼여부, 자녀유무
struct Person { 
	int age;
	float salary;
	char name[100];

	void go_to_work() {};
	void work_off() {};
	void vacation() {};
	//void gameInHome() {};
}; // 추상화(abstraction) -> 추출 
// 추상화란 위에서 언급한 것처럼 어떤 대상/집단의 공통적이고 본질적인 특징을 추출하여 정의한 것을 의미한다.
// 어떤 대상을 구현할 때, 그 대상의 본질적인 특징을 정의하고, 이것에 기반하여 대상을 객체로 구현하는 것을 의미한다.

int main() {



	return 0;
}