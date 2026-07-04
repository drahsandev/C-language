#include<stdio.h>
int main()
{
	int rows ;
	
	printf("enter a rows ... ");
	scanf("%d", &rows);
	
	int colmns;
	printf("enter a colmns ... ");
	scanf("%d", &colmns);
	
	int r = 1;
	while( r <= rows )
	{
		int c = 1;
		while ( c <= colmns )
		{
			printf("1");
			c ++ ;
		}
		printf("\n");
		r ++ ;
	}
	return 0;
	
}

