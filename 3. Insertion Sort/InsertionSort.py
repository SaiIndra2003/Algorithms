def InsertionSort(arr):
    n = len(arr)
    for i in range(1,n):
        temp = arr[i]
        j = i-1
        while(j>=0 and arr[j]>temp):
            arr[j+1] = arr[j]
            j-=1
        arr[j+1] = temp


if __name__=="__main__":
    arr=[8,7,6,5,4,3,2,1]
    print("Array before sorting... :",arr)
    InsertionSort(arr)
    print("Array after sorting...",arr)
