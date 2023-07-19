#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int Partition(int arr[],int low,int up){
    int pivot = arr[low];
    int start = low;
    int end = up;
    while(start < end){
        while(arr[start]<=pivot){
            start++;
        }
        while (arr[end]>pivot){
            end--;
        }
        if(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }     
    }
    swap(&arr[end],&arr[low]);
    return end;

}

void QuickSort(int arr[],int low, int up){
    if(low < up){
        int p = Partition(arr, low, up);
        QuickSort(arr,low,p-1);
        QuickSort(arr,p+1,up);
    }
}

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int size = 9;
    printf("Array before Sorted :\n");
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    QuickSort(arr,0,size-1);
    printf("Array after sorted :\n");   
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}