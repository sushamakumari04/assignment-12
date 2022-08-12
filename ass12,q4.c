//4. Write a recursive function to print first N odd natural numbers in reverse order.
printNoddr(int);
int main()
{
int n;
printf("enter the number you want to print");
scanf("%d",&n);
int s=printNoddr(n);
return 0;
}
int printNoddr(int n)
{

 if(n>0){
 printf("%d ",2*n-1);
 printNoddr(n-1);
 // printf("%d ",2*n-1);

 }
}
