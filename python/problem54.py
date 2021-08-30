def convertScore(str):
    score = 0
    if str[0] == "2":
        score = 20
    elif str[0] == "3":
        score = 30
    elif str[0] == "4":
        score = 40
    elif str[0] == "5":
        score = 50
    elif str[0] == "6":
        score = 60
    elif str[0] == "7":
        score = 70
    elif str[0] == "8":
        score = 80
    elif str[0] == "9":
        score = 90
    elif str[0] == "T":
        score = 100
    elif str[0] == "J":
        score = 110
    elif str[0] == "Q":
        score = 120
    elif str[0] == "K":
        score = 130
    elif str[0] == "A":
        score = 140

    # if str[1] == "H":
    #     score += 1
    # elif str[1] == "D":
    #     score += 1
    # elif str[1] == "C":
    #     score += 1
    # elif str[1] == "S":
    #     score += 1

    return score


def tinhToan(arr):
    score=[]
    score.append(checkHigher(arr))
    # score.append(checkOnePair(arr))
    score.append(checkTwoPair(arr))
    score.append(checkThreeCard(arr))
    score.append(checkStraight(arr))
    score.append(checkFlush(arr))
    # score.append(checkFullHouse(arr))
    # score.append(checkFourCard(arr))
    # score.append(checkStraightFlush(arr))

    return max(score)

def checkHigher(arr):
    temp = []
    for item in arr:
        temp.append(convertScore(item))
    return max(temp)

# def checkOnePair(arr):
#     maxScore = 0
#     for i in range(4):
#         for j in range(i+1,5):
#             if arr[i][0] == arr[j][0]:
#                 score= max(convertScore(arr[i]),convertScore(arr[j]))
#                 maxScore = max(score,maxScore)
#     if maxScore > 0:
#         return maxScore + 1000
#     else:
#         return 0

def checkTwoPair(arr):
    pair =0
    check = []
    curScore =0
    # maxScore = 0
    for i in range(4):
        for j in range(i + 1, 5):
            if arr[i][0] == arr[j][0]:
                if len(check) == 0 or arr[i][0] != check[len(check)-1]:
                    check.append(arr[i][0])
                    pair+=1
                    break
                # score = max(convertScore(arr[i]), convertScore(arr[j]))
                # maxScore = max(score, maxScore)

    if pair == 2:
        for item in arr:
            if item[0] != check[0][0] and item[0] != check[1][0]:
                curScore += convertScore(item)/10
        curScore += max(convertScore(check[0]), convertScore(check[1])) + 2000

    elif pair == 1:
        card_le = []
        for item in arr:
            if item[0] != check[0][0]:
                card_le.append(item)
        # curScore += max( convertScore(card_le[0])/10,
        # convertScore(card_le[1])/10,
        # convertScore(card_le[2])/10,
        # )
        max_L = 0
        for i in card_le:
            if convertScore(i)/10 > max_L:
                max_L = convertScore(i)/10 
        curScore += max_L

        curScore += convertScore(check[0]) + 1000

    return curScore

def checkThreeCard(arr):
    curScore =0
    # maxScore = 0
    # Score = []
    for i in range(3):
        check = []
        card = 1
        for j in range(i + 1, 5):
            if arr[i][0] == arr[j][0]:
                card += 1
                check.append(arr[i])
        # 4 la        
        if card == 4:
            curScore = convertScore(check[0]) + 7000
            break
        elif card == 3:
            curScore = convertScore(check[0]) + 3000
            # full house
            pair = []   
            for item in arr:
                if item[0] != check[0][0]:
                    pair.append(item)
            
            if pair[0][0] == pair[1][0]:
                curScore += 3000    
            break

    return curScore

def checkStraight(arr):
    # temp =[]
    # for item in arr:
    #     temp.append(convertScore(item))
    # temp.sort()
    # max = int(temp[4]/10)
    # min = int(temp[0]/10)

    # if max - min == 5:
    #     if arr[0][1] == arr[1][1] == arr[2][1] == arr[3][1] == arr[4][1]:
    #         if max == 14:
    #             return temp[4] + 9000
    #         return temp[4]+8000
    #     return temp[4]+4000
    # return 0

    temp =[]
    for item in arr:
        temp.append(convertScore(item))
    temp.sort()
    max = int(temp[4]/10)


    for i in range(4):
            if temp[i+1] - temp[i] != 10:
                return 0
            
    if arr[0][1] == arr[1][1] == arr[2][1] == arr[3][1] == arr[4][1]:
        if max == 14:
            return temp[4] + 9000
        return temp[4]+8000
    return temp[4]+4000

def checkFlush(arr):
    if arr[0][1] == arr[1][1] == arr[2][1] == arr[3][1] == arr[4][1]:
        return checkHigher(arr) + 5000
    return 0


    

# # #test
# arr = ["6D","7C", "5D", "4H","4S"]
# print("higher card " + str(checkHigher(arr)))
# print("two pair " + str(checkTwoPair(arr)))
# print("three card " + str(checkThreeCard(arr)))
# print("straight " + str(checkStraight(arr)))
# print("flush " + str(checkFlush(arr)))



# print(tinhToan(arr))

file = open("p054_poker.txt","r")
p1s =0
p2s =0
for line in file:
    a= list(map(str,line.rstrip().split()))
    p1 = a[0:5]
    p2 = a[5:10]

    if tinhToan(p1) > tinhToan(p2):
        p1s+=1
    elif tinhToan(p2) > tinhToan(p1):
        p2s+=1

print(p1s)
print(p2s)
file.close()







