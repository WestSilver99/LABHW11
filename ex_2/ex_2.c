#include <stdio.h>
//2���� �迭�� �Ű������� ���޹��� ��
//������Ÿ�� �迭��[][��ũ��]
void create_array(int array[][2], int rowSize) {
	int i, j;
	for (i = 0; i < rowSize; i++) {
		for (j = 0; j < 2; j++) {
			array[i][j] = ((i * 2) + (j + 1)) * 10;
		}
	}
}
void print_array(int array[][2], int rowSize){
	int i, j;
	for (i = 0; i < rowSize; i++) {
		for (j = 0; j < 2; j++) {
			array[i][j] = ((i * 2) + (j + 1)) * 10;
		}
	}
	for (i = 0; i < rowSize; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void get_row_sum(int array[][2], int rowSize){
	int i, j, sum;
	for (i = 0; i < rowSize; i++) {
		//��� ��ŭ �ݺ�
		int sum = 0; //�ึ�� �� ���� ���ϱ�
		for (j = 0; j < 2; j++) { //���� ��ŭ �ݺ�
			sum += array[i][j];
			printf("%d���� �� = %d ", i, sum);
		}
		printf("\n");
	}
}
void get_column_sum(int array[][2], int rowSize) {
	int i, j;
	for (j = 0; j < 2; j++) {
		int sum = 0;
		for (i = 0; i < rowSize; i++) {
			sum += array[i][j];
			printf("%d���� �� = %d ", j, sum);
		}
		printf("\n");
	}
}

int get_max(int array[][2], int rowSize) {
	int max = array[0][0];
	int i, j;

	for (i = 0; i < rowSize; i++) {
		for (j = 0; j < 2; j++) {
			if (array[i][j] > max)
				max = array[i][j];
		}
		printf("�ִ밪 = %d", max);
		printf("\n");
	}
}

int main(void)
{
	int data[3][2];
	int i, j;

	create_array(data,3);
	print_array(data, 3);

	printf("\n");

	get_row_sum(data, 3);

	printf("\n");

	get_column_sum(data, 3);

	printf("\n");

	get_max(data, 3);
	printf("\n");

	return 0;
}
