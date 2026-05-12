#include<stdio.h>

struct Demo
{
   int i;
   int *ptr;
};

int main()
{
   struct Demo dobj;
   int no=21;

   dobj.i=11;
   dobj.ptr=&no;

   printf("%d\n",dobj.i);
   printf("%d\n",*(dobj.ptr));
   printf("%d",dobj);// here value is 11 because %d is int

   return 0;
}