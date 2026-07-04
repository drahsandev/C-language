#include <stdio.h>
int main (){
    int n,i=0,sum=0;
    printf("Number: ");
    scanf("%d", &n);
     while ( n>0)
     {
         int x=n%10;
         n=n/10;
         sum+=x;
         i++;
     }
     printf("%d",sum);
     
   
    return 0;
}