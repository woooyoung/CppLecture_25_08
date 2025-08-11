#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

// 생성자 오버로딩
class Student {
public:
	int student_no;
	char student_name[100];

	Student() {
		student_no = 0;
		strcpy(student_name, "김철수");
	}

	Student(int studentNo, const char* studentName) {
		this->student_no = studentNo;
		strcpy(this->student_name, studentName);
	}

	void printInfo() {
		printf("%s 학생의 학번 : %d\n", student_name, student_no);
	}
};

int main() {

	Student* s1 = new Student();
	s1->printInfo();

	Student* s2 = new Student(2,"박민수");
	s2->printInfo();

	return 0;
}