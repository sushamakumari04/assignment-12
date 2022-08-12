//2. Write a recursive function to print first N natural numbers in reverse order#include<stdio.h>
#include<stdio.h>
printN(int);
int main()
{
int n;
printf("enter the number you want to print");
scanf("%d",&n);
int s=printN(n);
return 0;
}
int printN(int n)
{
 if(n>0){
//  printN(n-1);
  printf("%d ",n);
  printN(n-1);
 }
}
