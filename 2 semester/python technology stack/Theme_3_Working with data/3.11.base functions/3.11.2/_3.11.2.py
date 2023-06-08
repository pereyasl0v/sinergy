from collections import deque

pets=dict();
command='';

def create():
  
    nickname_=input("Nickname your pet\t")
    type_=input("Type your pet\t")
    age_=int(input("Age your pet\t"))
    name_=input("Name owner\t")

 

    pets[nickname_]= {type_,age_,name_}

    

def read():
    print(pets)
    return 0;

def update():

    nickname_=input();
    type_=input("Type your pet\t")
    age_=int(input("Age your pet\t"))
    name_=input("Name owner\t")

    pets[nickname_]= {type_,age_,name_}
    return 0

def delete():
    nickname_=input();
    del pets[nickname_];
    return 0

def get_pet(ID):

    return pets[ID] if ID in pets.keys() else False

def get_suffix(age):

    return 0

def pets_list():
    for nickname_ , age_ in pets:
        print(f"{nickname_} , {age_}")

    return 0

while(command!='stop'):

    command=input()

    if command=='create':
        create()
    if command=='read':
        read()
    if command=='update':
        update()
    if command=='delete':
        delete()
    if command=='info':
        pets_list()
    

