public class InsertionSort {
    static void insertionSort(int[] arr){
        int n = arr.length;
        for(int i=1;i<n;i++){
            int temp=arr[i];
            int j = i-1;
            while(j>=0 && arr[j]>temp){
                arr[j+1] = arr[j];
                j--;
            } 
            arr[j+1] = temp;
        }
    }

    static void printArray(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i] + " ");
        }
        System.out.println();
    }
    public static void main(String args[]){
        int[] arr = new int[]{9,8,6,5,1,3,2};
        System.out.println("Array before sorting... :");
        printArray(arr);
        insertionSort(arr);
        System.out.println("Arraay after sorting... :");
        printArray(arr);

    }
}
