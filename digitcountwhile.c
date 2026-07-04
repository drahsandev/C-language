#include <stdio.h>
int main(){
     int n;
     printf("Enter a number: ");
     scanf("%d", &n);
     int z=0;
     while(n>0)
     {
        n=n/10;
        
        z++;
     }
     printf("%d ",z);
    return 0;
}