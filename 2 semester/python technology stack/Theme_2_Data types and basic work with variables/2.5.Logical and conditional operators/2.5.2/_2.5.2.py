f=input("Enter word\n")
b=input()
c=input()
d=input()
w=input()
vowels=0;
consonants=0;
a=0;
e=0
i=0;
o=0;
u=0;

if f=="a" or b=="a" or c=="a" or d=="a" or w=="a":
    a =a+1;
    vowels = vowels+ 1;
else:
    consonants = consonants+1;
if f=="e" or b=="e" or c=="e" or d=="e" or w=="e":
    vowels =vowels+ 1;
    e =e+1;
else:
    consonants = consonants+1;
if f=="i" or b=="i" or c=="i" or d=="i" or w=="i":
    vowels =vowels+ 1;
    i =i+1;
else:
    consonants =consonants+1;
if f=="o" or b=="o" or c=="o" or d=="o" or w=="o":
    vowels =vowels+ 1;
    o =o+1;
else:
    consonants =consonants+1;
if f=="u" or b=="u" or c=="u" or d=="u" or w=="u":
    vowels =vowels+ 1;
    u =u+1;
else:
    consonants =consonants+1;


if a==0:
    a="False";
if e==0:
    e="False";
if i==0:
    i="False";
if o==0:
    o="False";
if u==0:
    u="False";
print("In word ",f,b,c,d,w," ",vowels,"vowels and ",consonants," consonants. \n Of them ",",a - ", a,",e - ",e,",i - ", i, ",o - ",o,",u - ",u,".")