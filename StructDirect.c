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
   dobj.i=11;
   dobj.f=10.0f;
   dobj.ch='A';
   printf("%d\n",dobj.i);    //11
   printf("%c\n",dobj.ch);   //A
   printf("%f\n",dobj.f);    //10.0


    return 0;
}