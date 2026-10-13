#include<stdio.h>
int main()
{
    float a,b,c, average;
    printf ("Enter the three digits");
    scanf("%f%f%f",&a,&b,&c);
     
average = (a+b+c)/3;

printf("the average of the three number = %.2f",average);

return 0;
}