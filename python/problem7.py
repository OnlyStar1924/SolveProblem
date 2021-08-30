import math
def checkPrime(num):
    for i in range(2,int(math.sqrt(num))+1):
        if num % i == 0:
            return False
    return True

dem = 0

i = 1
while dem <= 10001:
    if checkPrime(i):
        dem += 1
        ans =i
    i += 1
print(ans)
