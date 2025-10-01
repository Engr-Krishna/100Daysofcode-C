//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main()
{
    float cp, sp, profit, loss;
    printf("Enter the cost price and selling price:\n");
    scanf("%f %f", &cp, &sp);

    if (sp > cp)
    {
        profit = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", profit);
    }
    else if (sp < cp)
    {
        loss = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", loss);
    }
    else
    {
        printf("No profit, no loss");
    }

    return 0;
}
