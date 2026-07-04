#include <stdio.h>
int main(){
    int a=3;
    int b=4;
    int *ptra;
    int *ptrb;
    ptra=&a;
    ptrb=&b;
    printf("Before Swap a=%d    b=%d\n",a,b);
   int c=*ptra;
     //printf("%d\n",c);
     *ptra=*ptrb;
      //printf("%d\n",a);
      *ptrb=c;
       //printf(" \n",b);
        printf("After Swap a=%d     b=%d \n",a,b);

    return 0;
}