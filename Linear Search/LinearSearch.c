#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int arr[], int data,int size){

    for(int i=0;i<size;i++){
        if(arr[i]==data){
            return 1;
        }
    }

    return 0;
}

int main(){

    int arr[10] = {1,3,5,6,4,8,9,2,7,0};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=6;i<12;i++){
        int found = LinearSearch(arr,i,size);
        if(found){
            printf("%d is present in the given array....\n",i);
        }
        else{
            printf("%d is not present inside the array....\n",i);
        }
    }

    return 1;

}