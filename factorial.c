#include <stdio.h>
int main(){
     int n,r=1;
     printf("Enter a number: "), scanf("%d",&n);
     for (int i = 1; i <=n; i++)
     {
         r=r*i;
         printf("%d\n",r);
     }
     
      
     
    return 0;
}