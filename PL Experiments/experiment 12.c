#include<stdio.h>
int main()
{
    int n ,i;
    float sum,floatarr[100];
printf("Enter the number of element\n");
scanf("%d",&n);

printf("Enter the value to sum");
scanf("%d",&sum);

printf("Enter the elements\n");
for(i = 0;i < n;i++){
    scanf("%f",&floatarr[i]);
}

for(i = 0;i < n;i++){
sum = sum + floatarr[i];
printf("total sum=%f\n",sum);
}

return 0;
}
