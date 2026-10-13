#include<stdio.h>
int main() {
    int a;
    float b;
    double c;
    char ch;
    char name[50];
    
    //input section
    printf("Enter an integer:");
    scanf("%d",&a);

    printf("Enter a float value");
    scanf("%f",&b);

    printf("Enter a double value");
    scanf("%lf",&c);

    printf("Enter a character");
    scanf("%c",&ch);

    printf("Enter a string(name)");
    scanf("%s",name); //& is not needed as it an array.

    //output section
    printf("\n----output----\n");
    printf("Integer Entered :%d\n",a);
    printf("Float Entererd :%.2f\n",b);
    printf("Double Entered :%.2lf\n",c);
    printf("Character Entered :%c\n",ch);
    printf("String Entered :%s\n",name);

    return 0;
}