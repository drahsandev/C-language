#include <stdio.h>
int main (){
    int n,reverse=0,digits;
    printf("Number: ");
    scanf("%d", &n);
    while (n>0)
    {
          digits=n%10;
          reverse=reverse*10+digits;
          n=n/10;
    }
    
        
     printf("%d",reverse);
     
   
    return 0;
}