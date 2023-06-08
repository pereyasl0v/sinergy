res= [];

n=int(input("Enter amount of number\t"))
if n >= 1 and n<= 100000:
        for i in range(n):
            number=int(input("Enter number "))
            if number>=1 and number<=1000000000:
                res.append(number);
            else:
                 print("Number < 1 or > 1000000000");   
        print("First array")
        for i in range(n):
             print(res[i], end=' ')
else:
    print("amount > 100000 or < 1");

print("\nSecond array")
res2=[];
tmp=res[0];
tmp2=res[len(res)-1];


for i in range(len(res)-1):
    res2.append(res[0]+i)
    
res2.insert(0,tmp2)
print(*res2)



