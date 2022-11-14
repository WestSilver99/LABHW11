/*
HW11_1 영어영문학부 201820247 서은
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int main(void)
{
	int arr[SIZE];
	int i;
	int diff;
	
	printf("첫 번째 항? ");
	scanf("%d", &i);
	printf("공차? ");
	scanf("%d", &diff);
	arr[0] = i;

	printf("등차수열: %d ", arr[0]);

	for (int i = 1; i < SIZE; i++) {
		arr[i] = arr[i-1] + diff;
		printf("%d ", arr[i]);
	}
	printf("\n");


	return 0;
}