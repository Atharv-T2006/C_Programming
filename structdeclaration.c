#include<stdio.h>
// declaration
struct Demo
{
    int i;  //4
    float f; //4
};   //8 total

int main()
{
   struct Demo dobj;
   printf("%d\n",sizeof(dobj));  //8

    return 0;
}