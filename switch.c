
#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter the values");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case'+':printf("addition is %d",a+b);
        break;
        case'-':printf("subtraction is %d",a-b);
        break;
        case'*':printf("multiplication is %d",a*b);
        break;
        case'/':printf("division is %d",a/b);
        break;
        case'%':printf("remainder is %d",a%b);
        break;
        default:printf("invalid operator");
        break;
    }
    }
