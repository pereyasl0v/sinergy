x=int(input("Enter number\t"))
count = 0;

if x>0 and x<2000000000:
    for i in range(1,x+1,1):
        if (x/i)%(int(x/i))==0:
            count +=1;
print("Natural division\t",count);

