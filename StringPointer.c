#include<stdio.h>
int main()
{
    char str[]="Ganesh";
    char * ptr = NULL;

    ptr = str;  // 100 

    printf("%c\n",*ptr);  // G
    ptr++;  //101

    printf("%c\n",*ptr); // a
    ptr ++;

    printf("%c\n",*ptr);



    return 0;
}