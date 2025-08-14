// 가변배열 -> 변하는게 가능한 배열
// 고정크기 배열 -> 동적, 정적 크기가 정해진 배열

#include <cstdio>
#include <string>

template <typename T>
class MyArray {
public:
	T* arrayItem; // 배열 포인터
	int count = 0; // 배열 요소 지금 몇개?
	int capacity = 8; // 배열이 최대 몇개까지 요소를 넣을 수 있는가?

	MyArray() {
		arrayItem = new T[capacity];
	}

	virtual ~MyArray() {
		delete[] arrayItem;
	}

	void putValue(T value) {
		if (capacity > count) {
			arrayItem[count] = value;
			count++;
		}
		else {
			printf("기존보다 2배 커진 배열 생성\n");
			T* newArray = new T[capacity * 2];
			capacity = capacity * 2;
			for (int i = 0; i < count; i++) {
				newArray[i] = arrayItem[i];
			}
			delete[] arrayItem; // 기존의 배열 메모리 해제
			arrayItem = newArray; // 새로운 배열의 첫번째 공간의 주소로 덮어쓰기
			arrayItem[count] = value;
			count++;
		}
	}
};

int main() {

	MyArray<int> m = MyArray<int>();
	m.putValue(100);
	m.putValue(200);
	m.putValue(300);
	m.putValue(400);
	m.putValue(500);
	m.putValue(600);
	m.putValue(700);
	m.putValue(800);

	m.putValue(900);
	m.putValue(1000);
	m.putValue(1100);
	m.putValue(1200);
	m.putValue(1300);
	m.putValue(1400);
	m.putValue(1500);
	m.putValue(1600);

	m.putValue(1700);

	for (int i = 0; i < m.count; i++) {
		printf("%d ", m.arrayItem[i]);
	}

	printf("\n");

	MyArray<std::string> ms = MyArray<std::string>();
	ms.putValue("a");
	ms.putValue("b");
	ms.putValue("c");
	ms.putValue("d");
	ms.putValue("e");
	ms.putValue("f");
	ms.putValue("g");
	ms.putValue("h");

	ms.putValue("i");


	for (int i = 0; i < ms.count; i++) {
		printf("%s ", ms.arrayItem[i].c_str());
	}

	return 0;
}


