// 클래스 생성자 / 소멸자

#pragma warning (disable : 4996)

#include <cstdio>
#include <cstring>

class Student {
public: 
	int student_no;
	char name[100];
	int gender; // 0-남, 1-여

	// 생성자(Constructor) 
	// 생성자는 클래스 이름과 동일하게 만들어준다. 리턴타입은 x
	// 생성자는 new를 통해 객체를 만들 때 그 시점에 자동실행된다.

	Student(int StdNo, const char* n) { 
		printf("생성자 실행됨\n");
		this->student_no = StdNo;
		strcpy(this->name, n);
		this->gender = 0;
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

	return 0;
}