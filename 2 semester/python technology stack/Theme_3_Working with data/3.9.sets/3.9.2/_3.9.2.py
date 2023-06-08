n1=int(input("Amount numbers of 1 list "))
if n1>1 and n1<100000:
    n2=int(input("Amount numbers of 2 list "))
    if n2>1 and n2<100000:
        mass1=list(map(int,input("Enter numbers 1 \t").split(" ")));
        mass2=list(map(int,input("Enter numbers 2 \t").split(" ")));
        uc1=set(mass1);
        uc2=set(mass2);

print(len(uc1.intersection(uc2)))