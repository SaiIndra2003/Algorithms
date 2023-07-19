def partition(arr,low,high):
    pivot = arr[low]
    left = low
    right = high
    while(left<right):
        while(arr[left]<=pivot):
            left+=1
        while(arr[right]>pivot):
            right-=1
        if(left<right):
            temp = 