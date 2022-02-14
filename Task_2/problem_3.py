
import random
ran = random.randint(100,999)
con = True
counter = 0
main = [int(x) for x in str(ran)]  
flag =True
while flag:
    hit = 0
    miss = 0
    temp = []
    val = int(input())
    temp = [int(x) for x in str(val)]
    for i in range(len(main)):
        if(main[i] == temp[i]):
            hit +=1
            temp[i] = '*'
    for i in range(len(main)):
        for z in range(len(temp)):
            if main[i] == temp[z]:
                miss += 1
                temp[z]='*'
                break
    print(miss, "miss", hit, "hit")
    counter += 1
    if (hit==3):
           flag=False
print(counter, "tries")
