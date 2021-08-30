def largestPermutation(k, arr):
    dem =0
    while k>0:
        arr.reverse()
        index = arr.index(max(arr[0:dem]))
        index = len(arr)-1-index
        xem = arr[index]
        arr[index] = arr[dem]
        arr[dem]= xem
        k-=1
        dem+=1
        arr.reverse()
    return arr


k = 2
arr =[2,7,9,8,9]


# print(arr.reverse.index(9))
print(largestPermutation(k, arr))


