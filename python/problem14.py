def findLongestChain(num):
    sum =1
    while num !=1:
        if num %2 == 0:
            num /=2
        else:
            num = 3*num +1
        sum+=1
    return sum

max=1
kien = 0
for i in range(1000000,1,-1):
    if findLongestChain(i) > max:
        max = findLongestChain(i)
        kien = i
print(max)
print(kien)

# print(findLongestChain(999995))