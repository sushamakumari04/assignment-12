//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
printNsquare(int);
int main()
{
int n;
printf("enter the number you want to print");
scanf("%d",&n);
int s=printNsquare(n);
return 0;
}
int printNsquare(int n)
{

 if(n>0){
  printNsquare(n-1);
  printf("%d ",n*n);

 }
}
