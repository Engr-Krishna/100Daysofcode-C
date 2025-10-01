//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main()
{
    int a,b,c;
    char op;
    printf("Enter two numberrs \n");
    scanf("%d %d",&a,&b);
    printf("Enter the operator \n");
    scanf(" %c",&op);
    switch (op)
    {
    case '+' :
        {
            c=a+b;
            printf("%d",c);        
            break;
        }
    
    case '-' :
        {
            c=a-b;
            printf("%d",c);
            break;
        }
    
    case '*' :
        {
            c=a*b;
            printf("%d",c);
            break;
        }

    case '/' :
        {
            if(b!=0)\
            {
            c=a/b;
            printf("%d",c);
            }
            else
            printf("Division by zero not allowed");
            break;
        }

    case '%' :
        {
            if(b!=0)
            {
            c=a%b;
            printf("%d",c);
            }
            else
            printf("MOD by zero is not allowed");
            break;
        }
    
    default:
    printf("WRONG INPUT");
        break;
    }
    return 0;
}