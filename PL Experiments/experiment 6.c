#include<stdio.h>
int main()
{
    int a = 5,b = 10,c = 2,result1,result2;

    result1=a+b*c;/*in this operation the code will follow the result
                   with executing the product first due to no use of 
                   parantheses.*/
    result2=(a+b)*c;/*here the addition will happen first because the
                     addition is enclosed inside parantheses.*/ 
   
                     printf("result1=a+b*c=%d\n",result1);
                     printf("resul2=(a+b)*c=%d\n",result2);

                     printf("This is how parantheses play a very vital role when used in the operations");

                     return 0;
                     
}