#include <cstdio>

//#define EXCUTE_NUM 1
#define EXCUTE_NUM

//#if EXCUTE_NUM == 0
//#ifdef EXCUTE_NUM
#ifndef EXCUTE_NUM
int main() {

	printf("Hello 1\n");

	return 0;
}
#else
int main() {

	printf("Hello 2\n");

	return 0;
}
#endif