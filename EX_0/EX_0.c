#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

int main(void)
{
	int score[SIZE];
	int sum = 0;
	int average;

	for (int i = 0; i < SIZE ; i++) {
		printf("������ �Է��ϼ���: ");
		scanf("%d", &score[i]);

	}
	
	for (int j = 0; j < SIZE; j++) {
		sum += score[j];
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%4d", score[i]);
	}
	printf("\n");
	average = sum / sizeof(SIZE);

	printf("�հ�: %d\n", sum);
	printf("���: %d\n", average);

	return 0;
}
