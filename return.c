#include<stdio.h>

int display()
{
    return 11;  
}
int main(){
    int ret=0;
    ret=display();
    printf("%d\n",ret);
    return 0;
}