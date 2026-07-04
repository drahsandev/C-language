#include <stdio.h>

int main()
{
    int num, digits = 0, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0)
    {
        digits = temp % 10;

        int fact = 1;

        for (int i = 1; i <= digits; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        temp = temp / 10;
    }

    if (sum == num)
    {
        printf("%d is a Strong Number.", num);
    }
    else
    {
        printf("%d is Not a Strong Number.", num);
    }

    return 0;
}