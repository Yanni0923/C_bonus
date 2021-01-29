#include <stdio.h>

int main(void)
{   
    int income = 0;
    float tax = 0;
    const int threshold1 = 750;
    const int threshold2 = 2250;
    const int threshold3 = 3750;
    const int threshold4 = 5250;
    const int threshold5 = 7000;
    scanf("%d", &income);

    if (income <= threshold1)
    {
        tax = income * 0.01;
    }
    else if ((income > threshold1) && (income <= threshold2))
    {
        tax += threshold1 * 0.01;
        tax += (income - threshold1) * 0.02;
    }
    else if ((income > threshold2) && (income <= threshold3))
    {
        tax += threshold1 * 0.01 + (threshold2 - threshold1) * 0.02;
        tax += (income - threshold2) * 0.03;
    }
    else if ((income > threshold3) && (income <= threshold4))
    {
        tax += threshold1 * 0.01 + (threshold2 - threshold1) * 0.02 + (threshold3 - threshold2) * 0.03;
        tax += (income - threshold3) * 0.04;
    }
    else if ((income > threshold4) && (income <= threshold5))
    {
        tax += threshold1 * 0.01 + (threshold2 - threshold1) * 0.02 + (threshold3 - threshold2) * 0.03 + (threshold4 - threshold3) * 0.04;
        tax += (income - threshold4) * 0.05;
    }
    else
    {
        tax += threshold1 * 0.01 + (threshold2 - threshold1) * 0.02 + (threshold3 - threshold2) * 0.03 + (threshold4 - threshold3) * 0.04 + (threshold5 - threshold4) * 0.05;
        tax += (income - threshold5) * 0.06;
    }
    printf("Tax due: $%.2f", tax);
    
    return 0;
}