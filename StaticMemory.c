#include<stdio.h>

int main()
{
    // static memory allocation
    float marks[5];    // 20 bytes

    printf("Enter your marks : \n");
    // sequence
    scanf("%f",&marks[0]);
    scanf("%f",&marks[1]);
    scanf("%f",&marks[2]);
    scanf("%f",&marks[3]);
    scanf("%f",&marks[4]);

    return 0;
}