class Transport(object):

   name=''
   speed=0;
   mileage=0;

   def __init__(self, name, max_speed, mileage):

    self.name = name
    self.max_speed = max_speed
    self.mileage = mileage

   def printer(self):

       print(f'Name auto - {self.name}, max speed - {self.max_speed}, mileage - {self.mileage}')


autobus = Transport('Reno Logan',180,12)
autobus.printer();