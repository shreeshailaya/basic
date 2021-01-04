#include<stdio.h>

void linearSearch(int* arr, int arrSize, int key){
    int found;
    for(int i=0;i<arrSize;i++){
        if(arr[i]==key){
            found=1;
            break;  
        }
    }
    if(found==1){
        printf("found");
    }
    else{
        printf("Not Found");
    }
}




int main(){
    int arrSize;
    printf("Enter Array Size");
    scanf("%d",&arrSize);
    int arr[arrSize];
    printf("Enter Values in array");
    int arrVal;
    for(int i=0;i<arrSize;i++){

        scanf("%d",&arrVal);
        arr[i]=arrVal;

    }
    int key;
    printf("Enter Key to find value");
    scanf("%d", &key);
    linearSearch(arr, arrSize, key);
    
    return 0;
}