public class MergeSort{

    static void printArray(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i] + " ");
        }
        System.out.println();
    }

    static void Merge(int arr[],int low, int mid, int up){
        int n1=mid-low+1;
        int n2=up-mid;
        int L[] = new int[n1];
        int R[] = new int[n2];
        int i,j,k;
        for(i=0;i<n1;i++){
            L[i]=arr[low+i];
        }
        for(j=0;j<n2;j++){
            R[j]=arr[mid+1+j];
        }
        k=low;
        i=0;
        j=0;
        while(i<n1 && j<n2){
            if(L[i]<=R[j]){
                arr[k]=L[i];
                i++;
            }else{
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


    static void mergeSort(int arr[], int low, int up){
        if(low<up){
            int mid = (low+up)/2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid+1, up);
            Merge(arr,low,mid,up);
        }
    }

    public static void main(String args[]){
        int arr[] = {6,5,4,3,2,1};
        printArray(arr);
        mergeSort(arr, 0, arr.length-1);
        printArray(arr);
    }
}