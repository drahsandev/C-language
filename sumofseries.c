#include <stdio.h>
int main(){
    //1-2+3-4+5-6......n
     int n,sum=0;
     printf("Enter a number: "), scanf("%d",&n);
     for(int i=0;i<=n;i++)
     {
         if (i%2!=0)
         {
             sum+=i;  
         }
         else
         {
            sum-=i;
         }
         
     }
     printf("Sum of given series is %d",sum);
      
     
    return 0;
}