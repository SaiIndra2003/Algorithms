
def LinearSearch(arr,data):
    for i in range(len(arr)):
        if(arr[i] == data):
            return True
    return False


if __name__ == "__main__":
    arr = [1,2,3,4,5,6,7,8,9,0]

    for i in range(6,12):
        if(LinearSearch(arr,i)):
            print("Found", i ," in array..")
        else:
            print(i," is not present in the array..")


        

