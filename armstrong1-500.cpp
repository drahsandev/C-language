#include <stdio.h>
#include <math.h>
int main(){
    int i=1;
    while ( i<=500)
    {
    	int dc=0,digit=0,sum=0;
        int temp=i;
        while ( temp!=0)
        {
        	
            int counter=temp%10;
            dc++;
            temp=temp/10;
        }
        temp=i;
        while ( temp!=0)
        {
          digit=temp%10;
          sum+=pow(digit,dc);
          temp=temp/10;   
        }
         if ( sum==i)
         {
            printf("%d ",i);
         }
         
        
        
         i++;
    }
    
    return 0;
}
