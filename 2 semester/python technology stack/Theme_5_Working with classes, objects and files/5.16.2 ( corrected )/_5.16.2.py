import math
from math import fabs

class Turtle(object):
    Y=0
    X=0
    S=0

    def __init__(self,x,y,s):
        self.X=x
        self.Y=y
        self.S=s
    def go_up(self):
        self.Y += self.S
    def go_down(self):
        self.Y -= self.S
    def go_left(self):
        self.X -= self.S
    def go_right(self):
        self.X += self.S
    def evolve(self):
        self.S+=1
    def degrade(self):
        if self.S>0:
            self.S-=1
        else:
            print("Error s, = 0")
    def coord_inf(self):
        print(f"Your coordinate \nX:{self.X}\nY:{self.Y}")
    def count_moves(self,x2,y2):
        c=0
        if  ((x2-self.X)/self.S)%self.S==0:
                c += (x2-self.X)/self.S
        elif ((self.X-x2)/self.S)%self.S==0:
                c += (self.X-x2)/self.S
     
        if ((y2-self.Y)/self.S)%self.S == 0:
                c += (y2-self.Y)/self.S
        elif ((self.Y-y2)/self.S)%self.S == 0:
                c += (self.Y-y2)/self.S
        else:
            print("It is not possible to hit the given X and Y point with the given value <<evolve>> ")    
     
        if c!=0:
            print(f"You need {math.ceil(fabs(c))} steps.")
        if c==0:
            print("You need zero steps")
        
cherepaha = Turtle(0,0,1)

tmp=int(input(' w - go up\n s - go down\n a - go left\n d - go right \n\t\t e - evolve\n\t\t q - degrade\n\t\t c - coordinate information\n\t\t l - count step \n\n Lets start? \n 1.Yes\n 2.No\n'))
command = ''

if tmp==1:
    while(command!='p'):
        command=input()
        if command=='w':
            cherepaha.go_up()
        if command=='s':
            cherepaha.go_down()
        if command=='a':
            cherepaha.go_left()
        if command=='d':
            cherepaha.go_right()
        if command=='e':
            cherepaha.evolve()
        if command=='q':
            cherepaha.degrade()
        if command=='c':
            cherepaha.coord_inf()
        if command=='l':
            x2 = int(input("Coord X?\t"))
            y2 = int(input("Coord Y?\t"))
            cherepaha.count_moves(x2,y2)