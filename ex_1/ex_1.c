#include <stdio.h>
int main(void)
{
	int data[3][2];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			data[i][j] = ((i * 2) + (j+1)) * 10;
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d", data[i][j]);
		}
		printf("\n");
	}

	return 0;
}