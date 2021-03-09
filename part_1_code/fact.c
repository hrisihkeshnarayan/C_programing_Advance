#include<stdio.h>
int main()
{
int n,i,mult=1;
 printf("Enter the value of N :\n");
 scanf("%d",&n);
 
 i=1;
 while(i<=n)
 {
    
     
      mult=mult*i;
      i=i+1;
     
}
 printf("The factariol of natuarl number till n is : %d\n", mult);
 }
 
