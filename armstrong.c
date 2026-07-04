#include <stdio.h>
#include <math.h>
int main(){
	int num,dc=0,digits=0,sum=0;
	printf("Enter a Number: ");
	scanf("%d", &num);
	int temp=num;
	
	while(temp>0)
	{
		int digit=temp%10;
		dc++;
		temp=temp/10;
		
	}
	temp=num;
	while(temp>0)
	{
		digits=temp%10;
		sum=sum+pow(digits,dc);
        temp=temp/10;
	}
	if(sum==num)
	{
		 printf("dc = %d\n", dc);
printf("sum = %d\n", sum);
	}
	else
	printf("not armstrong");
	return 0;
}