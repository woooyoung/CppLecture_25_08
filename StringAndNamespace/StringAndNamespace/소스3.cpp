// namespace
#include <iostream>

namespace kim {
	void exam1();

	class Person {
	public:
		Person();

		void printInfo(int i, const char* str);
	};
}

namespace park {
	void exam1();

	class Person {
	public:
		Person();

		void printInfo(int i, const char* str);
	};
}

int main() {
	kim::exam1();
	park::exam1();

	//std::vector<int> myVec; 버전 다를 수 있음

	return 0;
}

void kim::exam1() {
	printf("김철수가 만든 exam1");
}

void park::exam1() {
	printf("박민수가 만든 exam1");
}

kim::Person::Person() {

}

park::Person::Person() {

}

void kim::Person::printInfo(int i, const char* str) {

}