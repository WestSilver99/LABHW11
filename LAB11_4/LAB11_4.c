/*
LAB11_4 영어영문학부 201820247 서은
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
	if (x == y) // x 와 y 의 주소가 같은지 비교한다.
		printf("두 배열의 주소가 같습니다.\n");
	else
		printf("두 배열의 주소가 다릅니다.\n");
/*
	for (i = 0; i < ARR_SIZE; i++) {
		if (x[i] != y[i]) {
			break;
		}

	}
	*/

	if (is_equal == 1)
		printf("두 배열의 내용이 같습니다.\n");
	else
		printf("두 배열의 내용이 다릅니다.\n");

	is_equal = get_equal(x, ARR_SIZE, y, ARR_SIZE);

}

