from math import sqrt
L, s, abn = 20162, 0, set()
ds = [1]*L

for i in range(2, int(sqrt(L))+1): ds[i*i]+= i
for i in range(2, int(sqrt(L))+1):
    for j in range(i+1, L//i):
        ds[i*j]+= i+j
for n in range(1, L):
    if ds[n] > n: abn.add(n)
    if not any( (n-a in abn) for a in abn ): s+= n
 
print ("Sum of all positive integers which cannot be written as the sum of two abundant numbers =",s)