#include<stdio.h>

int addition(int no1, int no2)
{
    int ans=0;
    ans=no1+no2;
    return ans;
}
int main(){
    
    int ret=0;
    ret=addition(11,10);
    printf("addition is : %d",ret);

    return 0;
}