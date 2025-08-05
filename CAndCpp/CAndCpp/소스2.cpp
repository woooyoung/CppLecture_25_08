// 상속(inheritance)

#include <cstdio>

struct Animal {
	int age = 10;
	int legs = 0;
	int arms = 0;
};

struct Person : public Animal{
	Person() { // 생성자 -> 해당 클래스로 객체를 생성할 당시에 자동실행되는 함수
		int legs = 2;
		int arms = 2;
	}
};

struct Dog : public Animal {
	Dog() {
		int legs = 4;
		int arms = 0;
	}
};

int main() {

	Person p1;
	
	printf("p1.age : %d\n", p1.age);
	printf("p1.legs : %d\n", p1.legs);
	printf("p1.arms : %d\n", p1.arms);

	Person* person;

	Animal* animal;

	person = (Person*)animal; // casting -> 형변환

	return 0;
}