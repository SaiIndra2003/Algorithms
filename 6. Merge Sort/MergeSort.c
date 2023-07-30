#include <stdio.h>
#include <stdlib.h>

void Merge(int arr[], int low, int mid, int up){
    int i,j,k;
    int n1=mid-low+1;
    int n2=up-mid;
    int L[n1], R[n2];
    for(i=0;i<n1;i++){
        L[i]= arr[i+low];
    }
    for(j=0; j<n2;j++){
        R[j] = arr[mid+1+j];
    }
    i=0;
    j=0;
    k=low;
    while (i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        k++;i++;
    }
    while (j<n2){
        arr[k]=R[j];
        k++;j++;
    }    
}


void MergeSort(int arr[], int low, int up){
    if(low<up){
        int mid = (low + up)/2;
        MergeSort(arr, low, mid);
        MergeSort(arr,mid+1,up);
        Merge(arr,low,mid,up);
    }
}

int main(){
    int arr[6]={6,5,4,3,2,1};
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    MergeSort(arr,0,5);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    } 
}