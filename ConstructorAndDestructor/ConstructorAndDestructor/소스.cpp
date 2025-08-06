// 클래스 
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable : 4996)

#include <cstdio>
#include <cstring>

//struct Student {
	//int age;
	//...
//};

class Student {
public: // 클래스 외부에서 클래스 내부를 접근할 수 있도록 하기 위함
	int student_no;
	char name[100];
	int gender; // 0-남, 1-여

	void printStudentInfo() {
		printf("학번 : %d\n", student_no );
		printf("이름 : %s\n",  name );
		printf("성별 : %s\n",  gender == 0 ? "남자" : "여자"); // 삼항연산 // 인라인 조건절 // <조건절> ? 값1 : 값2
	}
};

int main() {

	int a;
	int* p = &a;

	Student* ps = new Student();
	ps->student_no = 5678;
	strcpy(ps->name, "김민수");;
	ps->gender = 0;

	ps->printStudentInfo();

	delete ps;

	/*int a = 10; 
	Student s1;
	s1.student_no = 1234;
	strcpy(s1.name, "김철수");
	s1.gender = 0;

	s1.printStudentInfo();

	Student s2;
	s2.student_no = 4321;
	strcpy(s2.name, "김영희");
	s2.gender = 1;

	s2.printStudentInfo();*/

	return 0;
}