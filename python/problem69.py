primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53]

def pe69(L):
	maxn = 1
	for p in primes:
		if maxn*p > L: return maxn
		maxn *= p
	return "Buy me some more prime numbers!"

L = int(input("The maximum value of n/phi(n) for n ≤"))
print ("is", pe69(L))