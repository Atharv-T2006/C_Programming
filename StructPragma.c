#include<stdio.h>
#pragma pack(1) // for padding (to avoid padding)
// declaration
struct Demo
{
    int i;  //4
    char ch; //1        Generates padding
    float f; //4
};           //9 total

int main()
{
   struct Demo dobj;
   printf("%d\n",sizeof(dobj));   //9

    return 0;
}