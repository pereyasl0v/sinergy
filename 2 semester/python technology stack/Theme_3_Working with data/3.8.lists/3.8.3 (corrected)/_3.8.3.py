group = []
c=0
j=0
boat_m = int(input("The weight that one boat can support\t"))
if (boat_m>=1) and (boat_m <= pow(10,6)):
    n_people = int(input("Enter the number of  of fisherman\t"))
    if(n_people>=1) and (n_people<=100):
        i=0
        while(i<n_people):
            
            m_people = int(input(f"Weight of fisherman №{i+1} \t"))
            if(m_people >=1) and (m_people <= boat_m):
                
                group.append(m_people)


                i+=1
            else:
                print("Incorrect weight of fisherman")
               
        while(j<1):
            if(len(group))==1:
                c+=1
                group.pop(0)
            elif (group[-1] + group[0])<=boat_m:
                c +=1 
                group.pop(-1)
                group.pop(0)
            elif (group[-1] + group[0])>boat_m:
                c+=1
                group.pop(-1)
            if len(group)==0:
                j=1
          
        print(f"The minimum number of boats {c}")
    else: print("Incorrect number of fishermen")
else: 
    print("Not correct value of weight")