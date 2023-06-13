command=''

class Cassa(object):
   
   money=0

   def __init__(self,X):
       self.money=X

   def top_up(self,X): 
       self.money += X
       print(f"You top up your cassa balance by {X} money.\n\n")

   def count_1000(self): 
       print(f"You have {int(self.money/1000)} whole thousand in cassa\n\n")

   def take_away(self,X):
       if X>self.money:
           print("You don't have so much money in cassa\n\n")
       else:
           self.money -= X
           print(f"You take {X} money from the cassa.\n\n")


start= Cassa(0)

while (command!=4):
    command=int(input("1.Top up the balance.\n2.Balance of cassa.\n3.Take money from the cassa.\n4.Stop\n\n"))
   
   
    if command==1:
        j=int(input("Amount?\t-\t"))
        start.top_up(j)

    if command==2:
        start.count_1000()

    if command==3:
        j=int(input("Amoun?\t-\t"))
        start.take_away(j)
 