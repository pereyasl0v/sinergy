word=input("");
lenght=(len(word)-1);
start=word[0]
finish=word[lenght]
count = 0;


for i in range(0,int((lenght/2)+1),1):
    start=word[i];
    finish=word[lenght-i]
    if start==finish:
        count = count+1;
    if count==int((lenght/2)+1):
        print("yes")

if count!=int((lenght/2)+1):
    print("no")

