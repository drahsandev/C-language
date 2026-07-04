#include <stdio.h>

int main()
{
    int n = 5;
    int i, j, space, num;

    // Upper half (including middle row)
    for(i = 1; i <= n; i++)
    {
        // Print spaces
        for(space = 1; space <= n - i; space++)
        {
            printf("  ");
        }

        num = 1;

        // Print numbers
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", num);

            if(j < i)
                num++;
            else
                num--;
        }

        printf("\n");
    }

    // Lower half
    for(i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for(space = 1; space <= n - i; space++)
        {
            printf("  ");
        }

        num = 1;

        // Print numbers
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", num);

            if(j < i)
                num++;
            else
                num--;
        }

        printf("\n");
    }

    return 0;
}
