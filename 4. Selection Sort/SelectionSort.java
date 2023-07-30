public class SelectionSort{
    static void printArray(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i] + " ");
        }
        System.out.println();
    }

    static void selectionSort(int[] arr){
        int n = arr.length;
        for(int i=0;i<n-1;i++){
            int min = i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[min]){
                    min = j;
                }
            }
            if(min != i){
                int temp = arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
        }
    }

    public static void main(String args[]){
        int[] arr = new int[] {9,8,7,6,5,4,2};
        System.out.println("Array before sorting... :");
        printArray(arr);
        selectionSort(arr);
        System.out.println("Arraay after sorting... :");
        printArray(arr);
    }
}