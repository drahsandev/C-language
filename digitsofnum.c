#include <stdio.h>
int main (){
    int n,i=0;
    printf("Number: ");
    scanf("%d", &n);
     while ( n!=0)
     {
         int x=n%10;
         n=n/10;
         i++;
     }
     printf("%d",i);
     
   
    return 0;
}