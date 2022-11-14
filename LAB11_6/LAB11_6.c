/*
LAB11_6 영어영문학부 201820247 서은
*/
#include <stdio.h>

void print_array(int arr[], int size);
int get_sum(int arr[], int size);
int main(void)
{
	int data[3] = { 10, 20, 30 };
	int x[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(x) / sizeof(x[0]);
	printf("data = ");
	print_array(data, 3);
	printf("x = ");
	print_array(x, size);
	printf("data 배열 합 = %d\n", get_sum(data, 3));
	return 0;
}

void print_array(int arr[], int size) {
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int get_sum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}
