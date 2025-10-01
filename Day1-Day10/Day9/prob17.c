//Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>

int main()
{
        int a,b,c;         
        float determinant, root1 ,root2;    
        printf("Enter coefficents of a,b&c \n");
        scanf("%d %d %d",&a,&b,&c);
        determinant=b*b-4*a*c;    
        
        if(determinant>0)
        {
            root1=(-b-sqrt(b*b-4*a*c))/2*a;         
            root2=(-b+sqrt(b*b-4*a*c))/2*a;       
            printf("Roots are real and different: %f, %f", root1 ,root2);
        }
        else if(determinant==0)
        {
            root1=-b/(2*a); 
            printf("Roots is equal and real: %f", root1);
        }
        else
        {
            printf("Roots are complex");
        }
}