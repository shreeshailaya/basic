#include <stdio.h>
///Q-4
int main()
{
    int a=3, b=6;
    printf("%d", a=b);
    printf("%d", a==b);
    printf("%d", a!=b);
    printf("%d", a=!b);
    return 0;
}
///Answer:- 6100


/*

///Q-1
int main()
{
    char ch=65;
    int x=9;
    printf("%d %d", sizeof(ch),sizeof('A'));
    printf("%d %d", sizeof(65),sizeof(++x));
    printf("%d",x);
    return 0;
}
///Answer:- 14449


///Q-2
int main()
{
    printf("%d",'\n'-'\r');         ///10-3
    return 0;
}
///Answer:- -3


///Q-3
int main()
{
    int x = 300;                 ///300*300/300S
    printf("%u", x*x/x);         ///%u unsigned int 
    return 0;
}
///Answer:- 300

///Q-4
int main()
{
    int a=3, b=6;
    printf("%d", a=b);
    printf("%d", a==b);
    printf("%d", a!=b);
    printf("%d", a=!b);
    return 0;
}
///Answer:- 6100


///Q-5
int main()
{
    int a=-9,b=3,c=0,d;
    d=c++ && ++b;
    printf("a=%d b=%d c=%d d=%d", a,b,c,d);
    ///git adderd
    return 0;
}
///Answer:- -9,3,0,1,-9,3,1,1


///Q-6
int main()
{
    int x=-1;
    printf("%u, %x,%d", x>>1, x<<4,(unsigned)x>>1);

    return 0;
}
///Answer:- 4294967295,ffffffff0,2147483647


///Q-7

int main()
{
    char a=255;
    char b=127;
    b = ~b;
    a = a ^ b;
    printf("%d,%d", a,b);

    return 0;
}
///Answer:- 127,-128


///Q-8
int main()
{
    printf("%d",1|3%2);

    return 0;
}
///Answer:- 1


///Q-9

int main()
{
    int a = (1,2,3);
    int b = (++a, ++a, ++a);
    int c = (b++, b++, b++);
    printf("%d %d %d",a,b,c);
    return 0;
}
///Answer:- 6,9,8


///Q-10
{

    printf("%d", 4++);
    return 0;
}
*/
///Answer:- Compiler Error