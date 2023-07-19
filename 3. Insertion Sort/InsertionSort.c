#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[5] = {5,4,3,2,1};
    int size = 5;
    printf("Array before sorted....\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    insertionSort(arr,size);
    printf("\n Array after sorted... \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}