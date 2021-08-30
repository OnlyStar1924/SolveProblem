m = [map(int, row.split(',')) for row in open("p081_matrix.txt").readlines()]
c, r = len(m), len(m[0])

for i in range(1,c):
    for j in range(1,r):

        m[i][0]+= m[i-1][0]
        m[0][j]+= m[0][j-1]
        m[i][j]+= min(m[i-1][j], m[i][j-1])
 
print("Minimal path sum in", r, "by", c, "matrix =", m[3][2])