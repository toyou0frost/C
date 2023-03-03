#include <stdio.h>

int main() {
	int space = 0;
	int const_space = 0;
	int a = 0; printf("사이즈 입력((N + N) * N, 10 <= N <= 35) : "); scanf_s("%d", &a);
	while (a < 10 || a > 35){
		printf("값 입력 오류, 10 <= N <= 35 \n");
		printf("사이즈 입력((N + N) * N, 10 <= N <= 35) : "); scanf_s("%d", &a);
	} 
	int for_var_1 = a * 3 / 10 * 2;
	int for_var_2 = a * 7 / 10 * 2;
	if (for_var_1 % 2 != 0) {
		for_var_1 += 1;
	}
	if (for_var_2 % 2 != 0) {
		for_var_2 += 1;
	}
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			for (int j = 0; j < for_var_1; j++) {
				if (j % 2 != 0) {
					for (int k = 0; k < 4 * a * 15/100; k++) {
						printf(" ");
					}
					for (int k = 0; k < 2; k++) {
						printf(" ");
					}
					for (int k = 0; k < 4 * a * 20/100; k++) {
						printf("*");
					}
					if (j == for_var_1 - 1) {
						break;
					}
					printf("\n");
				}
				else {
					for (int k = 0; k < j; k++) {
						printf(" ");
						space = j + 1;
						const_space = j + 1;
					}
					for (int k = 0; k < 4 * a * 65/100; k++) {
						printf("*");
					}
				}
			}
		}
		else {
			space += 4 * a * 65 / 100 / 2 - 4 * a * 20 / 100 / 2;
			int tmp = 4 * a * 15 / 100 + (4 * a * 65 / 100 + 2 + const_space) - (4 * a * 20 / 100 + space + 1);
			for (int j = 0; j < for_var_2; j++) {
				if (j % 2 != 0) {
					for (int k = 0; k < tmp; k++) {
						printf(" ");
					}
					for (int k = 0; k < 2; k++) {
						printf(" ");
					}
					for (int k = 0; k < 4 * a * 20 / 100; k++) {
						printf("*");
					}
					printf("\n");
					const_space += 1;
				}
				else {
					for (int k = 0; k < space + j; k++) {
						printf(" ");
					}
					for (int k = 0; k < 4 * a * 20 / 100; k++) {
						printf("*");
					}
				}
			}
		}
		printf("\n");
	}

	return 0;
}
