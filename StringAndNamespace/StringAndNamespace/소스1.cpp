// std string -> const char*, char* ---> 배열 형태의 문자열을 할당 받을 수 있다.
// 덧셈 기호를 이용해서 문자열 이어 붙이기가 가능하다.
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <iostream>

// std::string 은 사용자가 메모리 관리, 배열 관리를 하지 않고 편하게 사용하기 위해서 만들었다.

int main() {

	std::string myStr = "Hello World!"; // = 에 대해서 -> 정적 변수인 myStr에 문자열을 넣는 (연산자)오버로딩이 필요해
	myStr = myStr + "Hello C++!";

	//std::string* myStrPointer; // 위의 이유로 만들었는데 동적할당의 역할????

	printf("%s\n", myStr.c_str());
	std::cout << myStr;

	return 0;
}
