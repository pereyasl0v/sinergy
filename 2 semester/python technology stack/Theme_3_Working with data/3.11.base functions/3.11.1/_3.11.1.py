def fact(n):
    j=0;
    z=1;
    spisok=[];
    for i in range(n):

        while(j<n):
         j=j+1;
         z=z*j
         spisok.insert(0,z)

    return spisok;





spisok=[];
n=int(input());

print(fact(n))
