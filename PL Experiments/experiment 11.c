#include<stdio.h>
int main()
{
    int intarr[5];
    float floatarr[5];
    char chararr[5];
    int i;

    printf("Enter 5 interger value\n");
    for(i=0;i<5;i++){
        scanf("%d",&intarr[i]);
    }
    printf("Enter 5 float value\n");
    for(i=0;i<5;i++){
        scanf("%f",&floatarr[i]);
    }
    printf("Enter 5 character value");
    for(i=0;i<5;i++){
        scanf("%c",&chararr[i]);
    }
    printf("value and address of the array:\n");
    printf("\nInteger Array\n");
    for(i=0;i<5;i++){
        printf("value=%d,taddress=%p\n",intarr[i]);
    }
    printf("\nFloat Array\n");
    for(i=0;i<5;i++){
        printf("value=%f,taddress=%p\n",floatarr[i]);
    }
    printf("\nCharacter Array\n");
    for(i=0;i<5;i++){
        printf("value=%c,taddress=%p\n",chararr[i]);
    }
    return 0;



}