

public class BubbleSort{

    static void printArray(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i] + " ");
        }
        System.out.println();
    }

    static void bubbleSort(int arr[]){
        int n = arr.length;
        boolean swapped = false;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=true;
                }
            }
            if(swapped == false){
                break;
            }
        }
    }

    public static void main(String args[]){
        int[] arr = new int[]{9,8,7,6,5,4,3,2,1};
        System.out.println("Array before sorting... :");
        printArray(arr);
        bubbleSort(arr);
        System.out.println("Arraay after sorting... :");
        printArray(arr);

    }

}