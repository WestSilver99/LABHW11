/*
HW11_6 ������к� 201820247 ����
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
        printf("������ �¼� ��? ");      
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

            printf("�� �¼��� �����߽��ϴ�.\n");
        }
        else          
        {
            printf("���� �¼� ���� %d �̹Ƿ� %d �¼��� ������ �� �����ϴ�\n", empty, request);
            break;
        }
    }

    return 0;
}

void print_seat(int seats[], int size)
{
    int i;
    printf("----------------------------------------------\n");
    printf("���� �¼� : [ ");

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