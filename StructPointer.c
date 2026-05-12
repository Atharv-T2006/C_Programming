#include<stdio.h>

struct Demo
{
   int i;
   int *ptr;
};

int main()
{
   struct Demo dobj;
   printf("size of object is : %lu\n",sizeof(dobj));  // either 8 or 16

   return 0;
}