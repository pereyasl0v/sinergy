mass=0;
count=0;
temp_mass=0;
counter=0;
m_boat = int(input("The maximum weight that one boat can support\t-\t"))
if m_boat>1 and m_boat<=1000000:
    n_people = int(input("Number of fishermen\t-\t"))
    if n_people>=1 and n_people<100:
        for i in range(n_people):
            print("Mass of fisherman ",i+1,"\t-\t", end=' ')
            m_people = int(input())
            if m_people>1 and m_people<=m_boat:
                if m_people>m_boat/2:
                    count = count +1;
                else:
                    counter=counter+1;
                    temp_mass = m_people + temp_mass;
                    if counter==2:
                        count=count+1;
                        temp_mass=0;
                        counter=0;
            else:
                print("Not correct value1")
        if counter==1 and m_people>1 and m_people<=m_boat/2:
             count= count+1;
    else:
        print("Not correct value2")
else:
    print("Not correct value3")

print(count);