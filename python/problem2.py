sum=2
fib=[1,2]

while fib[len(fib)-1] <4000000:
    num = fib[len(fib)-1] + fib[len(fib)-2]
    fib.append(num)
    if num % 2 ==0:
        sum += num

print(sum)

