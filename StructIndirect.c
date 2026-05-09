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
   struct Demo *ptr= NULL;

   ptr= &dobj;
   ptr -> i = 11;
   ptr -> ch = 'A';
   ptr -> f = 10.0f;

   printf("%d\n",ptr->i);
   printf("%c\n",ptr->ch);
   printf("%f\n",ptr->f);
   


    return 0;
}