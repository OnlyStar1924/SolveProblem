gridSize = 20
paths = 1
 
for i in range(gridSize):
    paths *= (2 * gridSize) - i
    paths /= i + 1

print(paths)