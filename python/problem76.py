#problem 76

# target = 100
# ns = range(1, target)
# ways = [1] + [0]*target 
# for n in ns:
#     for i in range(n, target+1):
#         ways[i] += ways[i-n]

# print ("Number of ways", target, "can be written as a \nsum of at least two positive integers:", ways[target])



#problem 31
target = 200
coins = [1, 2, 5, 10, 20, 50, 100, 200]
ways = [1] + [0]*target

print(ways)
for coin in coins:
    for i in range(coin, target+1):
        ways[i] += ways[i-coin]

print ("Ways to make change =", ways[target])