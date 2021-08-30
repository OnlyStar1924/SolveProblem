def collect(a,b):
    if a<=0 and b<=0:
        return [-1]
    if a<=0 and b>=0:
        a=0
    def snt(n):
        d=0
        for i in range(2,int(n**0.5)+1):
            if n%i==0:
                d+=1
            if d>0:
                break
        if d>0:
            return False
        return True
    nt=[i for i in range(1,31624) if snt(i) is True]
    ls=[i**2 for i in nt]
    kq=[i for i in ls if a<i<b]
    if len(kq)>0:
        return kq
    else:
        return [-1]
a = 1
b = 6

print(collect(a,b))