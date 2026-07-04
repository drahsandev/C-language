#include <stdio.h>
int main(){
     int n,z=0,x;
     printf("Enter a number: ");
     scanf("%d", &n);
    for(z=0;n>0;z+=x)
    {
        x=n%10;
        n=n/10;

    }
    printf("%d",z);
    return 0;
}