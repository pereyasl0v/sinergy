n=int(input("Enter amount of numbers\t"))
res=[];
check=0;
for i in range(n):
    j=int(input())
    if j>=1 and j <= 10000:
        res.append(j)
        check = check +j;
    if j<=0 or j>10000:
        res.append("False")
res.reverse()

if check<100000:
    for i in range(n):
        print(res[i], end=' ')
else:
    print("Sum number > 10e5")