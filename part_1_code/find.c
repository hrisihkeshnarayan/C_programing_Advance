 #include<stdio.h>
int main()
{
    char x;
    printf("Enter char :");
    scanf("%c",&x);
    if((x>='a' && x<='z') || (x>='A' && x<='Z') )
    {
        printf("%c is alphabate \n",x);

    }
    else if(x>='0' && x<='9')
    {
        printf("%c is a number\n",x );
    }
    else
    {
        printf("%c is special symbol\n",x);
    }
}