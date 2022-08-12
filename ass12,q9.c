//9. Write a recursive function to print octal of a given decimal number.
#include<stdio.h>
int octalNumber(int);
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
octalNumber(n);

return 0;
}
octalNumber(int n)
{
if(n>0)
{
 octalNumber(n/8);
 printf("%d",n%8);
}

}
