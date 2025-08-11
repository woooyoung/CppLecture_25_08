#include "헤더1.h"

int main() {

	Unit* units[10];

	srand(time(0));

	for (int i = 0; i < 10; i++) {
		switch (rand() % 4) {
		case 0:
			units[i] = new Goblin();
			//units[i]->max_hp = 100; xxxx 이렇게 하고싶지 않아서 생성자를 활용했다
			break;
		case 1:
			units[i] = new Orc();
			break;
		case 2:
			units[i] = new Slime();
			break;
		case 3:
			units[i] = new SkeletonArcher();
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		units[i]->printInfo();
	}

	for (int i = 0; i < 10; i++) {
		delete units[i];
	}

	return 0;
}