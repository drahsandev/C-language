#include <stdio.h>
int main(){
	int num;
	printf("Enter a number: "), scanf("%d",&num);
	int i=1,dc=0;
	while(i<=num)
	{
		 
		if(num/i==num || num/i==1)
		 {
		 dc++;
		}
		 
		 i++;
	}
	if(dc==2)
		 printf("\n%d is prime number.\n",num);
		 else printf("%d is not prime number.\n",num);
	return 0;
}
