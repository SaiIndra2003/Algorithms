public class QuickSort {

    static void printArray(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i] + " ");
        }
        System.out.println();
    }


    static int Partition(int[] arr, int low, int high){
        int pivot = arr[low];
        int left = low;
        int right = high;
        while(left<right){
            while(left<high && arr[left]<=pivot){
                left++;
            }
            while(right>left && arr[right]>pivot){
                right--;
            }
            System.out.println(right + " " + left);
            if(left<right){
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        }      
        // System.out.println(arr[low]+ " " + arr[right]);
        int temp = arr[low];
        arr[low] = arr[right];
        arr[right] = temp;      
        return right;
    }

    static void quickSort(int[] arr,int low, int high){
        if(low<high){
            int p = Partition(arr, low, high);
            quickSort(arr, low, p-1);
            quickSort(arr, p+1, high);
        }
    }

    public static void main(String args[]){
        int[] arr = new int[] {9,8,7,6,5,4,3,2,1};
        int low = 0;
        int high = arr.length-1;
        System.out.println("Array before sorting... :");
        printArray(arr);
        quickSort(arr, low,high);
        System.out.println("Arraay after sorting... :");
        printArray(arr);

    }
}
