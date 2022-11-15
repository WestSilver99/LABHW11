/*
HW11_7 영어영문학부 201820247 서은
*/
#include <stdio.h>
int main(void)
{
	int scores[5][5] = {// 학생 1 명당 4 개의 성적, 학생은 모두 5 명임
	{28,28,26,9},
	{30,27,30,10},
	{25,26,24,8},
	{18,22,22,5},
	{24,25,30,10}
	};
	double averages[5] = { 0 };
	int i, j;
	//학생별 합계와 평균 계산
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

	//항목별 평균 계산


	printf("\t\t 중간 \t기말 \t팀플 \t출석 \t총점\n");
	// 학생별 점수 출력
	for (i = 0; i < 5; i++) {
		printf("학 생 %3d 번:",i+1 );
		for (j = 0; j < 5; j++) {
			printf("\t%4d", scores[i][j]);
		}
		printf("\n");
	}

	printf("항목별 평균: ");
	//항목별 평균 출력
	for (int i = 0; i < 5; i++)
		printf("\t%4.1f", averages[i]);

	printf("\n");
}