/*
HW11_1 ������к� 201820247 ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int main(void)
{
	int arr[SIZE];
	int i;
	int diff;
	
	printf("ù ��° ��? ");
	scanf("%d", &i);
	printf("����? ");
	scanf("%d", &diff);
	arr[0] = i;

	printf("��������: %d ", arr[0]);

	for (int i = 1; i < SIZE; i++) {
		arr[i] = arr[i-1] + diff;
		printf("%d ", arr[i]);
	}
	printf("\n");


	return 0;
}