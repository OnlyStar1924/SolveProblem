i = 1
sum = 0
while i <= 500:
    j=1
    sub =1
    while j<=i:
        sub*=i
        j+=1
         
    sum += sub
    i+=1

print(sum)


