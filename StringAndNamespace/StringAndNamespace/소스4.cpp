#include <cstdio>
#include <vector>
#include <string>

using namespace std; // 이 코드가 나온 시점부터 전부 다 std라는 네임스페이스를 사용한다. 즉 생략할 수 있다.

int main() {

	string myStr = "Hello World!"; 

	vector<int> myVec;

	printf("%s\n", myStr.c_str());

	return 0;
}