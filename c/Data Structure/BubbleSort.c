#include<stdio.h>
void printofArr(int* arr, int no){
    for(int i=0; i<no; i++){
        printf("%d", arr[i]);
    }
}

void bubbleSort(int* Arr, int no){
    for(int i=0;i<no;i++){
        for(int j=0; j<no-i-1;j++){
            if(Arr[j]<Arr[j+1]){
                int temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int size;
    printf("Enter Size of arr");
    scanf("%d",&size);
    int arr[size];
    int arrNo;
    if(size>0){
        for(int i=0; i<size;i++){
            scanf("%d", &arrNo);
            arr[i]=arrNo;
        }
    }
    
    int arrSize=sizeof(arr)/sizeof(int);
    
    ///printofArr(arr, arrSize);
    bubbleSort(arr, arrSize);
    printofArr(arr,arrSize);
    return 0;

}

/*

///bubble sort asending order 
#include<stdio.h>
void printArray(int* A, int No){

    for(int i=0; i<No;i++){
        printf("%d , ",A[i]);
    }

}

void bubbleSort(int* A, int No){
    for(int i=0; i<No;i++){
        for(int j=0; j<No-i-1;j++){
            if (A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main(){
    int A[]={5,4,6,98,1,2};
    int No=6;
    ///printArray(A, No);
    bubbleSort(A, No);
    printArray(A, No);

    return 0;

}

*/