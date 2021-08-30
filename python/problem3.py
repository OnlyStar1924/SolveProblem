import math
def checkPrime(num):
    for i in range(2,int(math.sqrt(num))+1):
        if num % i == 0:
            return False
    return True

for i in range(1,int(math.sqrt(600851475143))):
    if checkPrime(i):
        if 600851475143 % i == 0:
            ans = i

print(ans)

# print(int(math.sqrt(600851475143)))