def SelectionSort(arr):
    n = len(arr)
    for i in range(n-1):
        min = i
        for j in range(i+1,n):
            if(arr[j]<arr[min]):
                min = j
        if(min != i):
            temp = arr[min]
            arr[min] = arr[i]
            arr[i] = temp

if __name__ == "__main__":
    arr = [9,8,7,6,5,4,3,2,1]
    print("Array before sorting... :",arr)
    SelectionSort(arr)
    print("Array after sorting...",arr)

