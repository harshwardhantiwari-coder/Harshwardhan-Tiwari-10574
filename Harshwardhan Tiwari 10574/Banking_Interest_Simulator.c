#include <stdio.h>

int main()
{
    float principal, rate, balance, interest;
    int years, i;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the number of years: ");
    scanf("%d", &years);

    balance = principal;

    for (i = 1; i <= years; i++)
    {
        interest = (balance * rate) / 100;
        balance = balance + interest;
        printf("Balance after year %d: %.2f\n", i, balance);
    }

    printf("\nFinal balance after %d years is: %.2f\n", years, balance);

    return 0;
}