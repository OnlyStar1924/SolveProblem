#Project Euler Problem 73

def ceildiv(a, b): return -(-a // b)

def p(L, n1=1, d1=3,  n2=1, d2=2):
    n = [0] * (L+1) 
    for d in range(1, L+1):
        n[d] += ceildiv(n2*d, d2) - ceildiv(n1*d, d1) - 1
        n[2*d::d] = [k-n[d] for k in n[2*d::d]]
    return sum(n)

print (p(12000), "fractions found in range.")