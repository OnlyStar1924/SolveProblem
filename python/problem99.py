import math
file = open("p099_base.txt","r")

max = 0
maxline =0
cline = 1
for line in file:
    a= line.rstrip().split(",")
    num= int(a[1]) * math.log(int(a[0]))
    if num > max:
        max =num
        maxline = cline

    cline+=1

print(maxline)


