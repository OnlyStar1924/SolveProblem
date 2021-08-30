def tinhgiaithua(n):
    giai_thua = 1
    if (n == 0 or n == 1):
        return giai_thua
    else:
        for i in range(2, n + 1):
            giai_thua = giai_thua * i
        return giai_thua

num = tinhgiaithua(100)

s = str(num)

ans =0
for i in s:
    ans+= int(i)
print(ans)