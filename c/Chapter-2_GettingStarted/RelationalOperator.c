#include <stdio.h>

int main(){
    int a=3, b=6;
    int c=a<b;
    int d=a>=b;
    
    printf("a=%d b=%d c=%d d=%d",a,b,c,d);
    return 0;
    
}


/*
int main (){
    int a=3, b=6, c=9;
    int d=a<b && b<c;   //d=1 because both condition are sat 
    int e=a<b || b<c;   //e=1 bcoz one of them is sat 
    int f=!(a>b);
    
    printf("a=%d,b=%d c=%d d=%d e=%d f=%d",a,b,c,d,e,f);
    return 0;
    
}
*/
