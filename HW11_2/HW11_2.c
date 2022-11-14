/*
HW11_2 영어영문학부 201820247 서은
*/

#include <stdio.h>
int main(void)
{
	int max = -99999;
	int min = 99999;
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	printf("배열: ");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("최대값: %d\n최소값: %d\n", max, min);
}