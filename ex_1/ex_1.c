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
	
	//2���� �迭 ���� ��
	for (i = 0; i < 3; i++) {
		//��� ��ŭ �ݺ�
		int sum = 0; //�ึ�� �� ���� ���ϱ�
		for (j = 0; j < 2; j++) { //���� ��ŭ �ݺ�
			sum += data[i][j];
			printf("%d���� �� = %d ", i,sum);
		}
		printf("\n");
	}

	printf("\n");

	//2���� �迭�� ���� ��
	for (j = 0; j < 2; j++) {
		int sum = 0;
		for (i = 0; i < 3; i++) {
			sum += data[i][j];
			printf("%d���� �� = %d ", j, sum);
		}
		printf("\n");
	}

	printf("\n");

	//2���� �迭�� ���� �� �ִ밪 ã��
	
	int max = data[0][0];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (data[i][j] > max)
				max = data[i][j];
		}
		printf("�ִ밪 = %d", max);
		printf("\n");
	}




	return 0;
}