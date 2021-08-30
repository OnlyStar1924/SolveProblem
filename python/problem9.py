def solve():
    triplet_sum = 1000
    min_a, max_a = 1, triplet_sum // 3
    for a in range(1, max_a):
        for b in range(a + 1, (triplet_sum - a) // 2):
            c = triplet_sum - a - b
            assert a < b < c, "constraint violated: {} < {} < {}".format(a, b, c)
            if a ** 2 + b ** 2 == c ** 2:
                return a * b * c  
print(solve())