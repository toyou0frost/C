#include <stdio.h>

int main() {
	int space = 0;
	int const_space = 0;
	bool isBlank = false;
	int a = 0; printf("사이즈 입력((6 * N) * N, 10 <= N <= 25) : "); scanf_s("%d", &a);
	while (a < 10 || a > 25) {
		printf("값 입력 오류, 10 <= N <= 25 \n");
		printf("사이즈 입력((6 * N) * N, 10 <= N <= 25) : "); scanf_s("%d", &a);
	}
	int star_thickness = a * 6 / 10 / 3;
	int black_thickness = a * 4 / 10 / 3;
	int decrea_star = 0;
	bool isFinish = false;
	a *= 4;
	for (int i = 0; i < a / 4; i++) {
		if (isBlank) {
			for (int j = 0; j < black_thickness * 2; j++) {
				if (j % 2 != 0) {
					for (int k = 0; k < a * 8 / 100; k++) {
						printf(" ");
					}
					for (int k = 0; k < a * 14 / 100; k++) {
						printf("*");
					}
					printf("\n");
					space++;
					decrea_star += 2;
				}
				else {
					if (isFinish) {
						if (j == 0) {
							if (((space - 1)+(a * 60 / 100 - decrea_star - 2) + (a * 4 / 100) + (a * 14 / 100)) < ((space) + (a * 64 / 100 - decrea_star) + (a * 14 / 100))) {
								break;
							}
						}
						else {
							if (((space - 1)+(a * 64 / 100 - decrea_star - 2) + (a * 14 / 100)) < ((space)+(a * 64 / 100 - decrea_star) + (a * 14 / 100))) {
								break;
							}
						}
					}
					for (int k = 0; k < space; k++) {
						printf(" ");
					}
					for (int k = 0; k < a * 64 / 100 - decrea_star; k++) {
						printf(" ");
					}
					for (int k = 0; k < a * 14 / 100; k++) {
						printf("*");
					}
				}
			}
			isBlank = false;
		}
		else {
			if (i < 1) {
				for (int j = 0; j < star_thickness * 2; j++) {
					if (j % 2 != 0) {
						for (int k = 0; k < a * 4 / 100; k++) {
							printf(" ");
						}
						for (int k = 0; k < a * 14 / 100; k++) {
							printf("*");
						}
						printf("\n");
					}
					else {
						for (int k = 0; k < j / 2; k++) {
							printf(" ");
							space = k + 1;
						}
						for (int k = 0; k < a * 82 / 100 - j; k++) {
							printf("*");
						}
						decrea_star = j + 1;
					}
				}
			}
			else {
				for (int j = 0; j < star_thickness * 2; j++) {
					if (j % 2 != 0) {
						for (int k = 0; k < a * 8 / 100; k++) {
							printf(" ");
						}
						for (int k = 0; k < a * 14 / 100; k++) {
							printf("*");
						}
						printf("\n");
						space++;
						decrea_star += 2;
					}
					else {
						if (isFinish) {
							if (j == 0) {
								if (((space - 1) + (a * 64 / 100 - decrea_star - 2) + (a * 14 / 100)) < ((space) + (a * 60 / 100 - decrea_star) + (a * 4 / 100) + (a * 14 / 100))){
									break;
								}
							}
							else {
								if (((space - 1) + (a * 60 / 100 - decrea_star - 2) + (a * 4 / 100) + (a * 14 / 100)) < ((space) + (a * 60 / 100 - decrea_star) + (a * 4 / 100) + (a * 14 / 100))) {
									break;
								}
							}
						}
						for (int k = 0; k < space; k++) {
							printf(" ");
						}
						if (0 < (a * 60 / 100 - (decrea_star + 6))) {
							for (int k = 0; k < a * 60 / 100 - decrea_star; k++) {
								printf("*");
							}
						}
						else {
							for (int k = 0; k < a * 60 / 100 - decrea_star; k++) {
								printf(" ");
							}
							isFinish = true;

						}
						for (int k = 0; k < a * 4 / 100; k++) {
							printf(" ");
						}
						for (int k = 0; k < a * 14 / 100; k++) {
							printf("*");
						}
					}
				}
			}
			isBlank = true;
		}
	}

	return 0;
}