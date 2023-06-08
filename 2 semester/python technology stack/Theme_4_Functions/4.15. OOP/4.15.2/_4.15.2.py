class Transport(object):

   name=''
   speed=0;
   mileage=0;

   def __init__(self, name, max_speed, mileage):

    self.name = name
    self.max_speed = max_speed
    self.mileage = mileage

   def seating_capacity(self, capacity):

       print(f"One bus capacity {self.name}  {capacity} passangers")

class Autobus(Transport):

    def seating_capacity(self, capacity):

      print(f"One bus capacity {self.name}  {capacity} passangers")


autobus = Autobus('Reno Logan',180,12)
autobus.seating_capacity(50);