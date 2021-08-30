from math import sqrt

def findDivisors(num):
    sum =0
    for i in range(2,num):
        if num % i == 0:
            sum += i
    return sum + 1



total =0

for i in range(2, 10000):

    a = findDivisors(i) 
    b = findDivisors(a)
    if b == i and a != i:
        # print(i)
        total= total + i
        i = a + 1
        
print(total)


# from math import sqrt
# L = 130000; ds = [1]*L
# for i in range(2, int(sqrt(L))):
#     for j in range(i+1, L//i):
#         ds[i*j]+= i+j
# an = []
# for i in range(2, L):
#     if ds[i] < i and ds[ds[i]] == i: an+= [ds[i], i]

# N = int(input("Limit? "))
# print ("Amicable sum less than",N,"=", sum(a for a in an if a<N))