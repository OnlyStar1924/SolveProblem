def diveable(num):
    for i in range(1,20):
        if num % i != 0:
            return False
    return True
num = 100
while diveable(num) != True:
    num +=10
print(num)