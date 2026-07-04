#include <stdio.h>

int main()
{
    char gender;
    float salary, bonus, totalSalary;

    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    if (gender == 'M' || gender == 'm')
    {
        bonus = salary * 0.05;
    }
    else if (gender == 'F' || gender == 'f')
    {
        bonus = salary * 0.10;
    }
    else
    {
        printf("Invalid Gender!");
        return 0;
    }

    totalSalary = salary + bonus;

    printf("\nOriginal Salary = %.2f", salary);
    printf("\nBonus = %.2f", bonus);
    printf("\nTotal Salary = %.2f", totalSalary);

    return 0;
}