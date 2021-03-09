#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("Enter the number ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
}