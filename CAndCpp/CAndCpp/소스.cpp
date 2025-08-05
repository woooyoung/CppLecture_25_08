// c와 c++의 차이
// c++은 c의 모든 내용을 담고 객체지향을 추가하며 기능은 많고 실행속도는 빠르게
// 일반적으로 다른 객체지향 언어는 클래스가 없으면 실행할 수 없다 -> 모든 함수는 클래스 내부에 존재
// c++은 객체지향을 포함하면서 클래스가 없어도 정상적으로 실행할 수 있다. (php, js) 

#include <iostream>
#include <cstdlib>

struct Person {
	int age;
	int hp;
};

int main() {

	//Person* p1 = (Person*)malloc(sizeof(Person));
	//free(p1);

	Person* p1 = new Person();
	delete p1;

	/*int* arr = (int*)malloc(sizeof(int) * 10);
	free(arr);*/

	int* arr = new int[10];
	delete[] arr;

	printf("Hello World!\n");

	/*std::cout << "Hello World!\n" << std::endl;*/


	return 0;
}