def BubbleSort(arr):
    n = len(arr)
    swapped = False
    for i in range(n-1):
        for j in range(n-1-i):
            if(arr[j]>arr[j+1]):
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
                swapped = True
        if(swapped == False):
            break

if __name__ == "__main__":
    arr = [9,8,7,6,5,4,3,2,1]
    print("Array before sorted... :",arr)
    BubbleSort(arr)
    print("Array after sorted... :", arr)
