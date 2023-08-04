n=int(input("Enter amount of numbers\t"))
res = []
check = 0
i = 0
while (i < n):
    j = int(input("Enter number \t"))
    if (j>=1 and j<=10000):
        check += j
        res.append(j)
        i += 1
    elif( j> 10000):
        print("Number > 10e4 , please try again")
    elif(j < 1):
        print("Number < 1 , please try again")
    else:
        print("No correct value")
res.reverse()

if abs(check)<100000:
    for i in range(n):
        print(res[i], end=' ')
else:
     print("the absolute value of a number > 10e5")
