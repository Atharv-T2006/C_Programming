#include<stdio.h>

int addition(int no1, int no2)
{
    int ans=0;
    ans=no1+no2;
    return ans;
}
int main()
{
    int ret=0,a=0,b=0;
    printf("Enter first number: \n");
    scanf("%d",&a);
    printf("Enter second number: \n");
    scanf("%d",&b);
    ret=addition(a,b);
    printf("addition is : %d",ret);

    return 0;
}