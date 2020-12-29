#include <stdio.h>
///Q-1
int main(){
    int a=2566;
    while(0)
        printf("5");
    return 0;
}
///Answer:- 


/*
///Q-1
int main()
{
    int a=3, b=6;
    if (a=b)                    ///assignment Operator 
        printf("%d %d",a ,b);
    else
        printf("%d != %d",a, b);
    
    return 0;
}
///Answer:- 6,6


///Q-2
{
    int a=3, b=6;
    printf("%d", a != b?0?b:a:b);       ///Condition Not equal to
    
    return 0;
}
Answer:- 3 


///Q-3
{
    int a=3, b=6;
    while (a--){                  ///Post Increament 
        printf("%d",a);
    }
                                ///a--=210 , --a=21
    return 0;
}
///Answer:- 2,1,0


///Q-4
{
    int a = 1000000L;
    printf("a=%d",a );
    for (a=1; a<10; a++){           ///Reassignment of a (a=1)
        printf("%d",a);
    }
    
    return 0;
}
///Answer:- 1,2,3.....,0


///Q-5
{
    char ch; 
    printf("%d",ch);
    while(ch<256){
        printf("%d",ch)         ///if we dont assign value to ch or int it will contain 0
    }
    return 0;
}
///Answer:- Infinity loop


///Q-6
{
    char i=0;
    do{
        printf("%d",i);
    }while (--i);           ///1st=-1 last=1
    return 0;
}
///Answer:-0,-1........1

///Q-7
{
    char i=0;
    do{
        printf("%d",i);
    }while (i--);
    return 0;
}

///Q-8
{
    int i,j;
    for (i=1; i<=3; i+=2)
        for (j=1; j<=3; j+=2)
            printf("%d", i+j);
    return 0;
}
///Answer:- 2 4 4 6

*/