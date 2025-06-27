def target_khujo(arr, tar):
    l = 0
    r = len(arr)-1
    while (l <= r):
        mid = l+(r-l)//2
        if (arr[mid] == tar):
            print("Khuje paisi")
            return mid 
        if arr[mid] < tar:
            l = mid+1
        else:
            r = mid-1
    print("pai nai ")

target_khujo([1, 2, 3, 4, 5, 6], 4)

