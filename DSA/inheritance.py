class Animal: #parent class
    def __init__(self, name):
        self.n = name
        print(self.n + " was adopted.")

    def run(self):
        print("animal has 4 leg.")

class Dog(Animal):
    def runs (self):
        pass
class Cat(Animal):
    def russ(self):
        pass

dog = Dog("DOG")
dog.run()
cat = Cat("CAT")
cat.run()

