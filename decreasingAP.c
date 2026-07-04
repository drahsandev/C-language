#include <stdio.h>
int main(){
    //100 50 12.5....
    float a;
    printf("Enter starting Number: "), scanf("%f", &a);
    int n;
    printf("Enter nth Number: "), scanf("%d", &n);
    for (int i=1;i<n;i++)
    {
         printf("%.2f ",a);
         a=a/2;
    }
    
    return 0;
}