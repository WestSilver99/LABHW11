/*
LAB11_2 영어영문학부 201820247 서은
*/

#include <stdio.h>
#define ARR_SIZE 5
unsigned int absolute(int x)
{
	return x > 0 ? x : -x;
}

int main(void)
{
	int x[ARR_SIZE] = { -4, 0, 28, 3, -12 };
	int y[ARR_SIZE] = { 0 };

	for (int i = 0; i < ARR_SIZE; i++) {
		y[i] = absolute(x[i]);
	}
	for (int i = 0; i < ARR_SIZE; i++)
		printf("%d ", y[i]);
	printf("\n");
}
