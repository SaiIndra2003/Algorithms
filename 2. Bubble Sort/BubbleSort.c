#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}


void BubbleSort(int arr[], int n){
    int swapped = 0 ;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped=1;
            }
        }
        if(swapped == 0){
            break;
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
    BubbleSort(arr,size);
    printf("Array after sorted :\n");
    
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}