// 클래스 생성자 / 소멸자

#pragma warning (disable : 4996)

#include <cstdio>
#include <cstring>

class Student {
public: 
	int student_no;
	char* name;
	int gender; // 0-남, 1-여

	// 생성자(Constructor) 
	// 생성자는 클래스 이름과 동일하게 만들어준다. 리턴타입은 x
	// 생성자는 new를 통해 객체를 만들 때 그 시점에 자동실행된다.
	// 객체가 생성되자마자 파라미터를 이용해서 값을 초기화 해준다.

	Student(int StdNo, const char* n) { 
		printf("생성자 실행됨\n");
		this->student_no = StdNo;
		name = new char[strlen(n) + 1];
		strcpy(this->name, n);
		this->gender = 0;

		//delete[] name; --> 문제발생 : 정작 필요할 때 사용하지 못함
	}

	~Student() { // 소멸자 : 클래스 인스턴스가 파괴될 때 -> 메모리에서 해제될 때
		printf("%s의 소멸자 호출됨\n", name);
		delete[] name;
	}

	void printStudentInfo() { // -> 수동실행
		printf("학번 : %d\n", student_no);
		printf("이름 : %s\n", name);
		printf("성별 : %s\n", gender == 0 ? "남자" : "여자"); // 삼항연산 // 인라인 조건절 // <조건절> ? 값1 : 값2
	}
};

int main() {
	printf("1\n");
	Student* ps = new Student(5678,"김민수");
	printf("2\n");
	/*ps->student_no = 5678;
	strcpy(ps->name, "김민수");;
	ps->gender = 0;*/
	ps->printStudentInfo();
	delete ps;

	Student* ps2 = new Student(1234, "김철수");
	ps2->printStudentInfo();
	delete ps2;

	Student ps3 = Student(4567, "박민수");
	ps3.printStudentInfo();

	return 0;
}