//6. Write a recursive function to print first N even natural numbers in reverse order.
#include<stdio.h>
printNevenr(int);
int main()
{
int n;
printf("enter the number you want to print");
scanf("%d",&n);
int s=printNevenr(n);
return 0;
}
int printNevenr(int n)
{

 if(n>0){
 printf("%d ",2*n);
  printNevenr(n-1);
  //printf("%d ",2*n);

 }
}
