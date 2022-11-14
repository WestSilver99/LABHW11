/*
LAB11_7_2 영어영문학부 201820247 서은
*/
#define _CRT_SECURE_NO_WARNINGS // scanf 사용을 위해 필요
#include <stdio.h>
void print_array(int arr[], int size);
int search(int arr[], int key, int size);
int main(void)
{
	int data[] = { 12, 34, 51, 22, 34, 12, 15 };
	int size, i;
	int key;

	size = sizeof(data) / sizeof(data[0]);
	printf("data = ");
	print_array(data, size);
	printf("찾을 값(키)? ");
	scanf("%d", &key);

	int search_result = search(data, key, size);
	printf("찾은 원소의 인덱스: %d\n", search_result);
}
int search(int arr[], int key, int size)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == key)
			return i;
	}
}
void print_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}