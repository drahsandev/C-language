#include <stdio.h>
int main(){
      int n;
      printf("Enter a number: ");
      scanf("%d", &n);
      int z=0;
      while(n!=0)
      {
       int x = n%10;
       n=n/10;
        z+=x;
      }
      printf("%d ",z);
    return 0;
}