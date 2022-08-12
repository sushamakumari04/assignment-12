printNeven(int);
int main()
{
int n;
printf("enter the number you want to print");
scanf("%d",&n);
int s=printNeven(n);
return 0;
}
int printNeven(int n)
{

 if(n>0){
 //printf("%d ",2*n-1);
  printNeven(n-1);
  printf("%d ",2*n);

 }
}
