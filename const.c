#include<stdio.h>
int main()
{
  int i = 10;
  const int j = 10;

  i++; //allowed
  j++;  // not allowed
  
  return 0;
}