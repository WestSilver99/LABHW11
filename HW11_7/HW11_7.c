/*
HW11_7 ������к� 201820247 ����
*/
#include <stdio.h>
int main(void)
{
	int scores[5][5] = {// �л� 1 ��� 4 ���� ����, �л��� ��� 5 ����
	{28,28,26,9},
	{30,27,30,10},
	{25,26,24,8},
	{18,22,22,5},
	{24,25,30,10}
	};
	double averages[5] = { 0 };
	int i, j;
	//�л��� �հ�� ��� ���
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			scores[i][4] += scores[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			averages[i] += scores[j][i];
		}
		averages[i] /= 5;
	}

	//�׸� ��� ���


	printf("\t\t �߰� \t�⸻ \t���� \t�⼮ \t����\n");
	// �л��� ���� ���
	for (i = 0; i < 5; i++) {
		printf("�� �� %3d ��:",i+1 );
		for (j = 0; j < 5; j++) {
			printf("\t%4d", scores[i][j]);
		}
		printf("\n");
	}

	printf("�׸� ���: ");
	//�׸� ��� ���
	for (int i = 0; i < 5; i++)
		printf("\t%4.1f", averages[i]);

	printf("\n");
}