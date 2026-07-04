#include <stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    for(int i=0;i<=num;i=i+2)
    if (num%2==0) printf("%d ",i);
    {
        /* code */
    }
    
    return 0;
}