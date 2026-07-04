#include <stdio.h>
int main(){
    int n,x;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n!=0)
    {
        x=n%10;
        n=n/10;
         if (x%2==0)
         {
            sum+=x;
         }
          
        
    }
    printf("%d",sum);
    return 0;
}