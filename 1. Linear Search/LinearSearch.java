
public class LinearSearch {
    
    public static int search(int arr[],int num){

        for(int i=0 ; i < arr.length; i++){
            if(arr[i] == num){
                return 1;
            }
        }

        return 0;
    }

    public static void main(String args[]){

        int arr[] = {1,2,3,4,5,6,7,8,9,0};
        for(int i=6;i<12;i++){
            if(search(arr,i) == 1){
                System.out.println(i + " is Present in the array..");
            }
            else{
                System.out.println(i+" is Not in the array");
            }
        }
    }

}
