#include<stdio.h>

int main()
{
    // static memory allocation
    float marks[5];    // 20 bytes

     // iteration
     for(int i=0;i<5;i++)
     {
        printf("Enter your marks of subject %d : \n",i);
        scanf("%f",&marks[i]);
    }

    for(int j=0;j<5;j++){
        printf("Entered marks of subject %d : \n",j);
        printf("%f",marks[j]);
    }

    

    return 0;
}