#include <stdio.h>
#include <math.h>
int main(){
    float num, res;
    printf("Enter a number: "), scanf("%f", &num);
    res=sqrt(num);
    printf("square root of your %.2f number is: %.2f",num,res);
    return 0;
}