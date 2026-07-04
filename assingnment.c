#include <stdio.h>

int main()
{
    int start, end;
    int evenSum = 0, oddSum = 0;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(int i = start; i <= end; i++)
    {
        if(i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }

    printf("\nSum of Even Numbers = %d", evenSum);
    printf("\nSum of Odd Numbers = %d", oddSum);

    return 0;
}