#include<stdio.h>

///Q-6
int myFun(int **p){
    int a = 
}
int main(){

    return 0;
}
///Answer:- Segmentation Fault -RunTime Error  






/*
///Q-1. During function call actual args are copied into formal args

///Q-2. main() Entry Point Function in C

///Q-3. decleration of libary function is kept in header files and their dfination in libary file 


///Q-5
#include<math.h>
int main(){
    int main = 49;
    printf("%.5f",sqrt(49));  ///.01f=7.0 , .4f=7.0000
    return 0;
}
///Answer:- 7.0


///Q-6
int main(){
    int a = 1;
    printf("%d",++a); /// 5
    main(); /// Segmentation Fault -RunTime Error 
    return 0;
}
///Answer:- Segmentation Fault -RunTime Error  


///Q-7
int main(){
    int a = 1;
    int *p = &a;
    int *q = p;
    *p= *p + *q;            
    printf("%d,%d,%d",a,*p,*q);
    return 0;
}
///Answer:- 222


///Q-8
int myFun(){
    return a*a;
}
int main(){
    int a = 3;
    printf("%d", myFun());
    return 0;
}
///Answer:- Compiler Error 


///Q-9
void myFun(int *p){
    printf("Addree of P %u", *p);
    ++*p; ///value increament 
    printf("++*p a= %d", *p);

    *p++; ///address increament garbage value 
    printf("*p++ a= %d", *p);
}
int main(){
    int a = 4;
    myFun(&a);
    printf("%d",a);
}
///Answer:- 5 

*/