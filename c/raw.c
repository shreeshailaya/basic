#include<stdio.h>
void disp(int* arr){
    int no= sizeof(arr)/sizeof(int);
    for(int i=0; i<no; i++){
        printf("%d", arr[i]);

    }

}

void push(int* arr, int x){
    
}
int main(){
    int arr[5];
    int x;
    push(arr,x);
    pop(arr);
    disp(arr);
    return 0;

}



/*
///bubble sort 
#include<stdio.h>

void printArr(int* arr, int sizeArr){
    for(int i=0; i<sizeArr; i++){
        printf("%d", arr[i]);
    }
}

void bubbleSort(int* arr, int sizeArr){
    for(int i=0; i<sizeArr; i++){
        for(int j=0; j<sizeArr-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int sizeArr=sizeof(arr)/sizeof(int);

    bubbleSort(arr, sizeArr);
    printArr(arr, sizeArr);
    return 0;
}

///Linear Search 
#include<stdio.h>
void printArr(int* arr, int arrSize){
    for(int i=0; i<arrSize; i++){
        printf(" %d ", arr[i]);
    }
}

void linearSearch(int* arr, int arrSize, int key){
    int found,pos;
    for(int i=0; i<arrSize;i++){
        if(arr[i]==key){
            found=1;
            pos=i;
            break;
        }
    }
    if(found==1){
        printf("Key is found at arr[%d]",pos);
    }else{
        printf("Key is not found ");
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    int arrSize=sizeof(arr)/sizeof(int);
    int key;
    printf("Enter the Key for search");
    scanf("%d",&key);
    printArr(arr, arrSize);
    linearSearch(arr, arrSize, key);
    return 0;
}

*/




