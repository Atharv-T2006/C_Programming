#include<stdio.h>

int addition(int no1, int no2)
{
    int ans=0;
    ans=no1+no2;
    return ans;
}
int main(){
    
    int ret=0,a=11,b=10;
    ret=addition(a,b);
    printf("addition is : %d",ret);

    return 0;
}