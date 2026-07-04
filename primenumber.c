#include <stdio.h>
int main (){
    int num;
    int a=0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            a=a+1;
            break;
        }
    }
    if (num==1)
    {
     printf("1 is neither prime nor composit.");  
    }
    else if (a==0)
    {
        printf("%d is prime number.",num);
    }
    else
    {
        printf("%d is composit.",num);
    }
    
    

    return 0;
}