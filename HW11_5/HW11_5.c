/*
HW11_5 영어영문학부 201820247 서은
*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include<stdio.h>
void print_star(int num);

int main()
{
    int nums[20];   
    int n;         
    int i;          

    printf("Enter the number of scores(<= 20) : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Enter a score : ");
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) 
    {
        printf("Student %2d : ", i + 1);
        print_star(nums[i]);
    }

    return 0;
}

void print_star(int num)
{
    int i;

    for (i = 0; i < num; i++)
    {
        printf("*");
    }
    printf("\n");
}