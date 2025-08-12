#define _CRT_SECURE_NO_WARNINGS
// 오버라이딩 : 부모클래스에 특정 함수를 자식클래스에서 재정의 하는 것
#include <cstdio>
#include <cstring>

class Animal {
public:
	int legs;
	char name[20];

	Animal(int legs, const char* name) {
		this->legs = legs;
		strcpy(this->name, name);
	}
	void printInfo() {
		printf("다리 갯수 : %d\n", legs);
		printf("이름 : %s\n", name);
	}
};

class Person : public Animal{
public:
	char regist_no[40];

	Person(const char* regist_no) : Animal(2,"사람"){
		strcpy(this->regist_no, regist_no);
	}

	void printInfo() {
		printf("다리 갯수 : %d\n", legs);
		printf("이름 : %s\n", name);
		printf("주민번호 : %s\n", regist_no);
	}
};

int main() {

	Person* p1 = new Person("1234-5678");
	p1->printInfo();

	return 0;
}