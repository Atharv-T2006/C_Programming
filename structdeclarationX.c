#include<stdio.h>
// declaration
struct Demo
{
    int i;  //4
    char ch; //1        Generates padding
    float f; //4
};           //12 total

int main()
{
   struct Demo dobj;
   printf("%d\n",sizeof(dobj));   //12

    return 0;
}