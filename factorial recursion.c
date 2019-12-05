#include<stdio.h>
int fact(int)
int main()
{
  printf("Enter a no. \n");
  scanf("%d",&n);
  printf("Factorial of %d is %d."n,(fact(n));
}
int fact(int n)
{ if(n>0)
  return(m=n*fact(n-1));
  else
  return(1);
}