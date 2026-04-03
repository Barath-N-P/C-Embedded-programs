#include<stdio.h>
int add(int a,int b)
{
  return a+b;
}
int sub(int a,int b)
{
   return a-b;
}
int main()
{
   int a,b;
   int (*point)(int,int);
   int (*point2)(int,int);
   point=add;
   point2=sub;
   scanf("%d %d",&a,&b); 
   printf("HERES THE ADDITION:%d\n",point(a,b));
   printf("HERES THE SUBTRACTION:%d\n",point2(a,b));
   return 0;
}