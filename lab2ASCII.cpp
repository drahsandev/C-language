#include <stdio.h>

int main()
{
    int rows = 7;

    for (int i = rows; i >= 1; i--)
    {
        //char ch = 'A';

        for (int j = 34; j <= 48; j++)
        {
            printf("%c=%d ", j	, j);
            
        }

        printf("\n");
    }

    return 0;
}
