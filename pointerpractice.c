#include <stdio.h>
int main(){
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("%u\n",j);
    return 0;
}