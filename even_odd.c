#include <stdio.h>
int main(){
    int n;
    printf("Enter number: "), scanf("%d", &n);
    int i=1;
    int even=0,odd=0;
    while (i<=n)
    {
         if (i%2==0)
         {
             even+=i;
         }
         else
         {
            odd+=i;
         }
         i++;
    }
    printf("Sum of Even: %d\n",even);
    printf("Sum of Odd: %d\n",odd);
    return 0;
}