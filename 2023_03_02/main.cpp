#include <stdio.h>

int main() {
	int space = 0;
	
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			for (int j = 0; j < 6; j++) {
				if (j%2 != 0) {
					printf("     ");
					for (int k = 0; k < 2; k++) {
						printf(" ");
					}
					for (int k = 0; k < 10; k++) {
						printf("*");
					}
					if (j == 5) {
						break;
					}
					printf("\n");
				}
				else {
					for (int k = 0; k < j; k++) {
						printf(" ");
						space = j + 1;
					}
					for (int k = 0; k < 40; k++) {
						printf("*");
					}
				}
			}
		}
		else {
			space += 13;
			for (int j = 0; j < 16; j++) {
				if (j % 2 != 0) {
					printf("     ");
					for (int k = 0; k < 16; k++) {
						printf(" ");
					}
					for (int k = 0; k < 10; k++) {
						printf("*");
					}
					printf("\n");
				}
				else {
					for (int k = 0; k < space + j; k++) {
						printf(" ");
					}
					for (int k = 0; k < 14; k++) {
						printf("*");
					}
				}
			}
		}
		printf("\n");
	}

	return 0;
}
