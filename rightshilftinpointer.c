#include <stdio.h>
int main(){
    char a='A', b='B',c='C',d;
    char *ptra, *ptrb, *ptrc;
    ptra=&a, ptrb=&b,ptrc=&c;
     //printf("hell");
    printf("a=%c   b=%c   c=%c\n",a,b,c);
    d=*ptrc;
    *ptrc=*ptrb;
    *ptrb=*ptra;
    *ptra=d;
   // printf("hell");
    printf("a=%c   b=%c   c=%c",a,b,c);
    return 0;

}