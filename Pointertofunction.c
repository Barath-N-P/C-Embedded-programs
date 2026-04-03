#include<stdio.h>
#include<stdlib.h>
const int a=0;
const int b=1;
int fibonacci(int n)
{
    if(n==0)
    {
        return a;
    }
    else if (n==1)
    {
        return b;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main()
{
    int (*pointertofunc)(int);
    int *upto;
    upto=calloc(1,sizeof(int));
    scanf("%d",upto);
    pointertofunc=fibonacci;
    printf("%d ",fibonacci(*upto));
    return 0;
}