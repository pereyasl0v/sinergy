n=int(input("Amount of numbers\t"));
mass=[];
temp =0;
for i in range(n):
    j=int(input())
    mass.append(j)

    uc1=set(mass)
    uc2=set(mass)

    uc3=len(uc2.intersection(uc1))


    if temp != uc3:
        print("NO")
        temp=uc3;
    else:
        print("YES")
