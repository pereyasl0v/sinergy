n=int(input("Enter amount of numbers\t"))
res=[]
check=0
i = 0
while (i < n):
    j = int(input("Enter number \t"))
    if (j>=1 and j<=10000):
        check += j
        res.append(j)
        i += 1
    else:
        print("don't correct number")
res.reverse()

if check<=100000:
    for i in range(n):
        print(res[i], end=' ')
else:
    print("Sum number > 10e5")