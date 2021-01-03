#include<stdio.h>
///Q-36
struct emp{
    int ecode;
    struct emp e;

};      //Error in declearation 

int main(){
    
    return 0;
}

/*
int main(){
    int i,j,count;
    count=0;
    for (i=0;i<=2;i++){
        for(j=0;j<=5;j++){
            count++;
            
        }
    }
    printf("%d",count);
    return 0;
}

int main(){
    char S[80];
    scanf("%s" ,S);
    printf("%s",S);
    return 0;
    }


///Q-36
struct emp{
    int ecode;
    struct emp e;

};      //Error in declearation 

int main(){
    
    return 0;
}
*/