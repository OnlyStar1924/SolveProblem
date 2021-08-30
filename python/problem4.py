def checkPalindromic(num):
    d = num
    renum = 0
    while d >= 10:
        r = d % 10
        d = d / 10
        renum = renum * 10 + r
    renum = renum * 10 + d
    if renum == num:
        return True
    else:
        return False
    
max =1
for i in range(1,1000):
    for j in range(1,1000):
        if checkPalindromic(i*j):
            if i*j > max: max = i*j


print(max)