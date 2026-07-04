#include <stdio.h>

int main()
{
    int rows;
    int a = 0, b = 1, c;
    printf("Enter rows: "), scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int s = 1; s <= rows - i; s++)
        {
            printf("   ");
        }

        // Print Fibonacci numbers
        for (int j = 1; j <= i; j++)
        {
            c = a + b;
            printf("%5d", c);
            a = b;
            b = c;
        }

        printf("\n");
    }

    return 0;
}
