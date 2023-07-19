def Partition(arr,low,high):
    pivot = arr[low]
    start = low
    end = high
    while(start<end):
        while(start < high and arr[start]<=pivot):
            start+=1
        while(end > low and arr[end]>pivot):
            end-=1
        if(start<end):
            arr[start],arr[end] = arr[end],arr[start]
    arr[low],arr[end] = arr[end], arr[low]
    return end

def QuickSort(arr,low,high):
    if(low<high):
        p = Partition(arr,low,high)
        QuickSort(arr,low,p-1)
        QuickSort(arr,p+1,high)

if __name__=="__main__":
    arr = [9,8,7,6,5,4,3,2,1]
    print("Array before sorting... :",arr)
    QuickSort(arr,0,len(arr)-1)
    print("Array after sorting...",arr)
    