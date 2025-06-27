# class person:
#   name = "Md. Wahid Ullah"
#   sex = "Male"
#   age = 25
#   def person_info(self):
#     print(f'l am {self.name}, {self.age} years old and I am {self.sex}')
# p = person()
# print(p.name)
# p.person_info()


# class Car:
#   name = "Sadik"
#   color = "Red"
#   def start():
#     print("Starting the engine")

# Car.start()
# print("Color & car name", Car.color, Car.name)
# # print("Name of the car:", )


import math
class Circle:
    def __init__(self, radius):
        print(math.pi * radius*radius)


radius= float(input("Enter.the radius of the circle: "))
circle  = Circle(radius) 

