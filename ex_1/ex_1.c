#include <stdio.h>
int main(void)
{
	int data[3][2];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			data[i][j] = ((i * 2) + (j+1)) * 10;
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d", data[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//2차원 배열 행의 합
	for (i = 0; i < 3; i++) {
		//행수 만큼 반복
		int sum = 0; //행마다 합 새로 구하기
		for (j = 0; j < 2; j++) { //열수 만큼 반복
			sum += data[i][j];
			printf("%d행의 합 = %d ", i,sum);
		}
		printf("\n");
	}

	printf("\n");

	//2차원 배열의 열의 합
	for (j = 0; j < 2; j++) {
		int sum = 0;
		for (i = 0; i < 3; i++) {
			sum += data[i][j];
			printf("%d열의 합 = %d ", j, sum);
		}
		printf("\n");
	}

	printf("\n");

	//2차원 배열의 원소 중 최대값 찾기
	
	int max = data[0][0];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (data[i][j] > max)
				max = data[i][j];
		}
		printf("최대값 = %d", max);
		printf("\n");
	}




	return 0;
}