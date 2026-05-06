#include<stdio.h>

void display(int no1, int no2)
{
  printf("%d %d\n",no1,no2);
}
int main(){
    int a=11,b=21;

    display(a,b);//call by value
    return 0;
}