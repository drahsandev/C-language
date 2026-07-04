#include <stdio.h>
int main (){
	int i=2;
	int num,small;
	printf("Enter a 1 Number: "), scanf("%d",&small);
	while(i<=10)
	 {
	 	printf("Enter a %d Number: ",i), scanf("%d",&num);
	 	if(small>num)
	 	{
	 		small=num;
		 }
		 i++;
	 }
	 printf("%d is smallast.",small);
	return 0;
}
