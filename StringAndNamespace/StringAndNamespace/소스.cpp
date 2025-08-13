// 문자열
// strcpy strcat 
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main() {

	char myString[100];

	strcpy(myString, "Hello World!");

	strcat(myString, "Hello C++!");

	printf("%s\n", myString);

	return 0;
}
