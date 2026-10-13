#include<stdio.h>
int main()
{
    int a;
    printf("Enter a nummber");
    scanf("%d",&a);

    if(a > 0){
        printf("%d is positive number");
    }
    else if(a < 0){
        printf("%d is negative number");
    }
    else{
        printf("The number is zero");
    }
return 0;
}
