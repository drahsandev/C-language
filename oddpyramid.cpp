#include <stdio.h>

int main()
{
    int odd = 1;
    int count = 0;

    for(int i = 1; i <= 6 && count < 20; i++)
    {
        // Print spaces
        for(int j = 1; j <= 6 - i; j++)
        {
            printf("   ");
        }

        // Print odd numbers
        for(int k = 1; k <= i && count < 20; k++)
        {
            printf("%5d ", odd);
            odd += 2;
            count++;
        }

        printf("\n");
    }

    return 0;
}
