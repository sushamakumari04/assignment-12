//10. Write a recursive function to print reverse of a given number.
#include<stdio.h>
int ReverseN(int);
int main()
{
int n ;
printf("enter the number");
scanf("%d",&n);
ReverseN(n);

return 0;
}
int ReverseN(int n)
{
if(n>0)
{
  printf("%d",n%10);
 ReverseN(n/10);
// printf("%d",n%10);
}


}
