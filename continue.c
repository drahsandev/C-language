#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=2;i<=100;i++)
    {
        if(i%2==0){
            printf("%d is even\n",i);
              continue;
        }
    }
    return 0;
}