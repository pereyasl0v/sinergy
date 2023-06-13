n=int(input("Colithestvo\t"))
all_dict=dict()
name_pets_dict=dict()

for i in range(n):

    name_pet=input("Imya pitomca\t")
    type_pet=input("Vid\t")
    age_pet=int(input("Vozrast\t"))
    if age_pet >0:
        name_owner=input("Imya vladeltsya\t")


        name_pets_dict[name_pet]={"Vid" : type_pet, "Vozrast":age_pet , "Imya vladeltsya": name_owner}

        if age_pet%10 == 1:
            age="god"
        elif age_pet%10 == 2 or  age_pet%10 == 3 or  age_pet%10 ==4:
            age="goda"
        else:
            age="let"

        print( "Eto", list(name_pets_dict[name_pet].values())[0] ,"po klichke", list(name_pets_dict.keys())[i],'. Vozrast pitomca', list(name_pets_dict[name_pet].values())[1], age, ". Imya vladeltsya " ,list(name_pets_dict[name_pet].values())[2])

    else:
        print("No correct age")

   






