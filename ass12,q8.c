//8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
int DtoB(int);
int main()
{
int n;
printf("Enter the decimal number");
scanf("%d",&n);
DtoB(n);

return 0;
}
int DtoB(int n)
{
 if(n>0)
 {
  DtoB(n/2);
  printf("%d",n%2);
 }
}
