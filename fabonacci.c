 #include <stdio.h>

int main() {
    int n, i = 1;
    int a = 1, b = 1, sum;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n >= 1)
        printf("%d ", a);

    if (n >= 2)
        printf("%d ", b);

    while (i <= n - 2) {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
        i++;
    }

    return 0;
}