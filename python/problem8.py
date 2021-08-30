f = open("problem8.txt", "r")
arr = f.readline()

max=1
for i in range(987):
    ann = 1
    for j in range(13):
        ann *= int(arr[i+j])
    if ann> max: max= ann

print(max)