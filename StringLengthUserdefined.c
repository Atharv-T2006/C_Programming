#include<stdio.h>

int strlenX(char *ptr)
{
    int i = 0;
    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }
    return i;
}
int main()
{
    char str [] = "Ganesh";
    char *ptr=NULL;
    ptr = str;
     strlenX();

    
    

    return 0;
}