/*
LAB11_4 ������к� 201820247 ����
*/

#include <stdio.h>
#define ARR_SIZE 5
int get_equal(int x_arr[], int xSize, int y_arr[], int ySize) {
	if (xSize != ySize) {
		return 0;
	}
	else {
		for (int i = 0; i < xSize; i++) {
			if (x_arr[i] != y_arr[i]) {
				return 0;
			}
		}
		return 1;
	}
}
int main(void)
{
	int x[ARR_SIZE] = { 10, 20, 30, 40, 50 };
	int y[ARR_SIZE] = { 10, 20, 30, 40, 50 };
	int i;
	int is_equal = 1;
	if (x == y) // x �� y �� �ּҰ� ������ ���Ѵ�.
		printf("�� �迭�� �ּҰ� �����ϴ�.\n");
	else
		printf("�� �迭�� �ּҰ� �ٸ��ϴ�.\n");
/*
	for (i = 0; i < ARR_SIZE; i++) {
		if (x[i] != y[i]) {
			break;
		}

	}
	*/

	if (is_equal == 1)
		printf("�� �迭�� ������ �����ϴ�.\n");
	else
		printf("�� �迭�� ������ �ٸ��ϴ�.\n");

	is_equal = get_equal(x, ARR_SIZE, y, ARR_SIZE);

}

