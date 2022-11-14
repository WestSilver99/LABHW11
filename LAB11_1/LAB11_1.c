/*
LAB11_1 영어영문학부 201820247 서은
*/

#include <stdio.h>
#define ARR_SIZE 5
int main(void)
{
	int arr[ARR_SIZE] = { 1, 2, 3, 4, 5 };
	int x[ARR_SIZE] = { 1, 2, 3 };
	int y[ARR_SIZE] = { 0 };
	int z[] = { -1, 0, 1 };
	int i, size;

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("x = ");
	for (i = 0; i < ARR_SIZE; i++)
		printf("%d ", x[i]);
	printf("\n");

	printf("y = ");
	for (i = 0; i < ARR_SIZE; i++)
		printf("%d ", y[i]);
	printf("\n");

	printf("z = ");
	size = sizeof(z) / sizeof(z[0]);
	for (i = 0; i < size; i++)
		printf("%d ", z[i]);
	printf("\n");

	return 0;
}