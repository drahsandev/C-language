#include <stdio.h>
int main(){
      int n,i=0;
      printf("Enter a number: ");
      scanf("%d", &n);
    while ( n>=0)
    {
         int x=n%2;
         n=n/10;
         i+=x;
    }
    printf("%d ",i);
    return 0;
}