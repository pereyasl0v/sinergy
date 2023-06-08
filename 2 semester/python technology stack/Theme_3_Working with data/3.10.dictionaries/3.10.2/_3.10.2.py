n=int(input())
slovar=dict()

for i in range (n):
    a=int(input())
    b=a**a;
    slovar[a] = b;

print(slovar)
