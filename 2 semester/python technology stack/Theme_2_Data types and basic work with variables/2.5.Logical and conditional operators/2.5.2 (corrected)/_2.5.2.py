word = input("Enter word\n")

l=len(word)
i = 0
glas = 0
a=0
e=0
o=0
i_=0
y=0
u=0

while (i < l):
    if(word[i]== "a"):
        a += 1
        glas += 1
    elif(word[i]== "e"):
        e += 1
        glas += 1
    elif(word[i]== "o"):
        o += 1
        glas += 1
    elif(word[i]== "u"):
        u += 1
        glas += 1
    elif(word[i]== "y"):
        y += 1
        glas += 1
    elif(word[i]== "i"):
        i_ += 1
        glas += 1

        
    i+=1

soglas = l- glas

if(a == 0):
    a = "False"
if(o == 0):
    o = "False"
if(u == 0):
    u = "False"
if(y == 0):
    y = "False"
if(e == 0):
    e = "False"
if(i_ == 0):
    i_ = "False"

print("Glas - ", glas,"\nSoglas - ", soglas, "\na - ",a , "\no - ",o, "\nu - ",u, "\ny - ",y, "\ni - ",i_, "\ne - ",e)
