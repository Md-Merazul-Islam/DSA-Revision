from abc import ABC, abstractmethod


class Animal(ABC):
    @abstractmethod
    def make_sound(self):
        pass


class Dog(Animal):
    def make_sound(self):
        return "Woof!"


class Cat(Dog):
    def make_sound(self):
        return "Meow!"


# Now you can do this:
animal = Cat()
animal2 = Dog()
print(animal.make_sound())
print(animal2.make_sound())

