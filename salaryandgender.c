#include <stdio.h>

int main()
{
    char gender;
    float salary, bonus = 0, totalSalary;

    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    if (gender == 'M' || gender == 'm')
    {
        if (salary < 100000)
        {
            bonus = salary * 0.07;   
        }
        else
        {
            bonus = salary * 0.05;   
        }
    }
    else if (gender == 'F' || gender == 'f')
    {
        if (salary < 100000)
        {
            bonus = salary * 0.12;   // 10% + 2%
        }
        else
        {
            bonus = salary * 0.10;   // Only 10%
        }
    }
    else
    {
        printf("Invalid Gender!");
        return 0;
    }

    totalSalary = salary + bonus;

    printf("\nOriginal Salary = %.2f", salary);
    printf("\nBonus = %.2f", bonus);
    printf("\nFinal Salary = %.2f", totalSalary);

    return 0;
}