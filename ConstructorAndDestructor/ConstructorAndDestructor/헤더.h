#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>

int number_counter = 1; // 사번(을 시스템에서 알아서 부여하기 위함)

class Empolyee {
public:
	int no;
	//char name[100];
	char* name;
	int gender;
	//char rank[100];
	char* rank;

	Empolyee(char* name, int gender, char* rank) { // 생성자
		this->name = new char[strlen(name) + 1]; // +1 은 널문자까지
		this->rank = new char[strlen(rank) + 1];
		strcpy(this->name, name); // 주소값이 다르고 실제 값도 다른 메모리 주소에 존재
		this->gender = gender;
		strcpy(this->rank, rank);

		this->no = number_counter;
		number_counter++;
	}

	~Empolyee() {
		delete[] name;
		delete[] rank;
		printf("%d번 사원이 삭제될 당시의 소멸자 실행\n", no);
	}

	void printInfo() {
		printf("사원번호 : %d\n", this->no);
		printf("사원명 : %s\n", this->name);
		printf("성별 : %s\n", this->gender == 0 ? "남성" : "여성");
		printf("직급 : %s\n", this->rank);
	}
};

int getInt(const char* prompt);

char* getString(const char* prompt);
