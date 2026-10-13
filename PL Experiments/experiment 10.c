#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);

    printf("\n===THE MULTIPLICATORY SERIES===\n");
    i=1;
    while(i<=10)
    {
        printf("%dx%d=%d\n",i,n,n*i);
        i++;
    }
return 0;
}