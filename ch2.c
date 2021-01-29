#include <stdio.h>

int main (void)
{
    float loan = 0.00f;
    float interestRate = 0.00f; //年利率(除以12，弄成月收入)
    float monthlyPayment = 0.00f; //月支出

    scanf("%f", &loan);
    scanf("%f", &interestRate);
    scanf("%f", &monthlyPayment);

    //第一次
    loan *= (1 + (interestRate * 0.01 / 12)); 
    loan -= monthlyPayment;
    printf("Balance remaining after first payment: $%.2f\n", loan);

    //第二次
    loan *= (1 + (interestRate * 0.01 / 12)); 
    loan -= monthlyPayment;
    printf("Balance remaining after second payment: $%.2f\n", loan);

    //第三次
    loan *= (1 + (interestRate * 0.01 / 12)); 
    loan -= monthlyPayment;
    printf("Balance remaining after third payment: $%.2f\n", loan);
    return 0;

}