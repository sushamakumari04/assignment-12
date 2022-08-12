//3. Write a recursive function to print first N odd natural numbers#include<stdio.h>
printNodd(int);
int main()
{
int n;
printf("enter the number you want to print");
scanf("%d",&n);
int s=printNodd(n);
return 0;
}
int printNodd(int n)
{

 if(n>0){
 printNodd(n-1);
  printf("%d ",2*n-1);
 // printN(n-1);
 }
}
