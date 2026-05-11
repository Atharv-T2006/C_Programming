#include<stdio.h>

struct Hello
{
   float f;  //4
   int Arr[3]; //12
}hobj;  // hobj is Global variable          
       //16 total

int main()
{
   printf("size of object is : %lu\n",sizeof(hobj));


    return 0;
}