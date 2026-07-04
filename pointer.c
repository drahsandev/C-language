#include <stdio.h>
int main(){
    int a=10;
    int *ptra=&a;
   /* printf("The value of 'a' is %d\n ",a);
    printf("The adress  of 'a' is %x\n ",ptra);
    printf("The adress of 'a' is %x\n ",&a);
    printf("The value of 'ptra' is %d\n ",&ptra);
    printf("The value of 'ptra' is %d\n ",ptra);
    printf("The adress of 'ptra' is %x\n ",&ptra);
    printf("the value of a is %d ",*ptra );*/
    printf("The adress of ptra is %p\n",ptra);
    printf("The adress of ptra is %p\n",&ptra);
    printf("The adress of ptra is %x\n",&ptra);
    printf("The adress of ptra is %x\n",ptra);
    return 0;
}