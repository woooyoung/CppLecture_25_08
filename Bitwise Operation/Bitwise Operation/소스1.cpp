#include <cstdio>


// 카테고리 분류 -> 게임의 물리엔진이나 물리 분야의 시뮬레이션 (가장 빠르기 때문에)
// 충돌체크 또는 반발력, 마찰력 계산

void exam1(int params) {
	int category1 = 1; // 1
	int category2 = 1 << 1; // 2
	int category3 = 1 << 2; // 4 

	if ((category1 & params) != 0) {
		printf("카테고리 1에 포함\n");
	}

	if ((category2 & params) != 0) {
		printf("카테고리 2에 포함\n");
	}

	if ((category3 & params) != 0) {
		printf("카테고리 3에 포함\n");
	}
	printf("\n");
}

int main() {

	int mario_category = 8 + 4 + 2 + 1;

	int enemy_category = 0 + 4 + 2 + 1;

	int turtle_category = 0 + 0 + 2 + 1;

	int feature_category = 0 + 4 + 0 + 0;

	exam1(1 | 2 | 4);

	exam1(1 | 2);

	exam1(1 | 4);

	return 0;
}