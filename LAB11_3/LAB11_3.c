/*
LAB11_3 ������к� 201820247 ����
*/
#include <stdio.h>
#define ARR_SIZE 10
int main(void)
{
	int arr[ARR_SIZE] = { 0 };
    //int arr[ARR_SIZE] = { 1, 1 };

    for (int i = 0; i < ARR_SIZE; i++)
    {
        if (i <= 1)
            arr[i] = 1;
        else
            arr[i] = arr[i - 2] + arr[i - 1];
    }

	for (int i = 0; i < ARR_SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");
    return 0;
}
