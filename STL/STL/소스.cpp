// STL(Standard Template Library)
// 결정을 최대한 뒤로 미루고 싶어, 어떤 함수나 변수를 만들 때 타입? 몰라. 지정하고 싶지 않아.
// 타입을 내가 미리 지정해놨을 때 ) int a = 10; int b(){return 5.5;}
// -> 해당 타입의 특정적인 함수랑 변수 클래스 밖에 못 만든다.
// STL -> 미루고 미루다가 타입을 사용하기 직전에 지정할래.(범용성이 높아진다)
#include <cstdio>
#include <string>

template <typename T>
class MyClass { // 아래의 클래스 내부에는 타입이 지정되지 않은 무언가가 있다. -> 타입의 지정을 뒤로 미룰래(선택장애)
public:
	T value; // <- 변수의 타입은 아직 정해지지 않았어.
};

template <typename T>
void swap(T* a, T* b) {
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int v1 = 100;
	int v2 = 200;

	swap<int>(&v1, &v2);

	printf("v1 : %d, v2 : %d\n", v1, v2);

	std::string sv1 = "Hi";
	std::string sv2 = "Bye";

	swap<std::string>(&sv1, &sv2);

	printf("sv1 : %s, sv2 : %s\n", sv1.c_str(), sv2.c_str());


	MyClass<int>* m = new MyClass<int>(); // value 변수의 타입은 객체를 만들 때 정해졌다.
	m->value = 100;
	printf("%d\n", m->value);

	MyClass<std::string>* ms = new MyClass<std::string>(); // value 변수의 타입은 객체를 만들 때 정해졌다.
	ms->value = "안녕하세요";
	printf("%s\n", ms->value.c_str());

	return 0;
}