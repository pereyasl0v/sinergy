n=int(input("Amount of numbers\t"))
mass=[];
mass2=[];
if n>=1 and n<1000000:

        mass=list(map(int,input("Enter number\t").split(' ')))
        

        for i in range(n):
            if mass[i]>(-1000000000) and mass[i]<1000000000:

                 mass2.append(mass[i]);
            else:
                mass2.append(9999999999999);
        uc1=set(mass2);
        uc1.discard(9999999999999);
        print(uc1)
        print(len(uc1))

else:
    print("Not correct value")
