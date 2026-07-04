#include <stdio.h>
#include <math.h>
int main (){
	int i=1;
	while(i<=500)
	{
		int dc=0 ,sum=0;
		int temp=i;
		while(temp>0)
		{
			temp=temp/10;
			dc++;
		}
		temp=i;
		while(temp>0)
		{
			int digit=temp%10;
			sum+=pow(digit,dc);
			temp=temp/10;
		}
		if(sum==i) printf("%d is armstrong\n",i);
		 
		i++;
	}
	
	return 0;
}
