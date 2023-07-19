#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void SelectionSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int min = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(&arr[i],&arr[min]);
        }
    }
}

int main(){
    int arr[6] = {9,8,6,5,3,2};
    int size = 6;

    printf("Array before Sorted :\n");
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    SelectionSort(arr,size);
    printf("Array after sorted :\n");
    
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}