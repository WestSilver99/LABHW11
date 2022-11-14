/*
HW11_6 영어영문학부 201820247 서은
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SEATS 10

void print_seat(int seats[], int size);
int main()
{
    int seats[MAX_SEATS] = { 0 };
    int occupied = 0;
    int request = 0;
    int empty = 10;
    int i;

    while (1)
    {
        print_seat(seats, MAX_SEATS);    
        printf("예매할 좌석 수? ");      
        scanf("%d", &request);

        if (empty >= request)          
        {
            for (i = occupied; i < occupied + request; i++)  
            {
                seats[i] = 1;

                printf("%d ", i + 1);
            }
            occupied += request;
            empty -= request;            

            printf("번 좌석을 예매했습니다.\n");
        }
        else          
        {
            printf("남은 좌석 수가 %d 이므로 %d 좌석을 예매할 수 없습니다\n", empty, request);
            break;
        }
    }

    return 0;
}

void print_seat(int seats[], int size)
{
    int i;
    printf("----------------------------------------------\n");
    printf("현재 좌석 : [ ");

    for (i = 0; i < size; i++)
    {
        if (seats[i] == 0)  
            printf(" O ");
        else                
            printf(" X ");
    }
    printf("] \n");
    printf("----------------------------------------------\n\n");
}