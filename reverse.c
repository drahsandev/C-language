#include <stdio.h>
int main(){
     int n,r;
     printf("Enter a number: "), scanf("%d",&n);
     for(r=0;n>0;r=r*10)
     {
        r=r+(n%10);
        n=n/10;
        
     }
     r=r/10;
      printf("%d",r);
     
    return 0;
}