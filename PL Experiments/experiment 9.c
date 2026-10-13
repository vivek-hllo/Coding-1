#include<stdio.h>
int main()
{
int choice;
float a,b,result;
do{

    printf("\n====menu-driven-calculator=====\n");
    printf("Enter two number\n");
    scanf("%f%f",&a,&b);
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("%f+%f=%f",a,b,a + b);
        break;
        case 2:
        printf("%f-%f=%f",a,b,a-b);
        break;
        case 3:
        printf("%f*%f=%f",a,b,a*b);
        break;
        case 4:
        if(b != 0)
        {
        printf("%f/%f=%f",a,b,a/b);
        break;
        }
        else
        {
          printf("ERROR division by zero is not possible");
        }
        default:
        printf("GOODBYE");

    }

  } while(choice != 5);

return 0;
}

