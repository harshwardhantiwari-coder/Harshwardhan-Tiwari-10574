💰 Simple Interest Calculator in C
📌 Description

This program calculates the compound balance of a principal amount over a given number of years using a fixed annual interest rate.
It displays the balance after each year and the final balance at the end of the investment period.

The program is written in C and uses basic concepts like:

Variables

Loops

User input/output

Arithmetic operations

🧮 How the Program Works

The user enters:

Principal amount

Rate of interest (in percentage)

Number of years

The program calculates interest year by year.

The balance is updated annually.

The balance after each year is displayed.

The final balance is shown at the end.

📂 Source Code
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
}<img width="1388" height="467" alt="Screenshot 2026-01-05 112248" src="https://github.com/user-attachments/assets/db190166-1943-4d43-b620-d3cdb52ba16e" />


▶️ How to Run the Program

Compile the program:

gcc interest.c -o interest


Run the executable:

./interest


Enter the required values when prompted.

🛠 Requirements

C Compiler (GCC recommended)

Any operating system that supports C

📚 Example Output
Enter the principal amount: 1000
Enter the rate of interest: 10
Enter the number of years: 3
Balance after year 1: 1100.00
Balance after year 2: 1210.00
Balance after year 3: 1331.00

Final balance after 3 years is: 1331.00
