import math
def findFactor(num):
    sum =0
    for i in range(1,int(math.sqrt(num))):
        if num % i == 0:
            sum +=1
    return sum+1

num=1
i=2
while int(findFactor(num)) < 500:
    num+=i
    i+=1

print(num)