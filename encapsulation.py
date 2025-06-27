class Fish: 
    def __init__(self):
        self.__size = "big"
        
    #result 
    def get_size(self):
        print("I'm a " + self.__size + " fish") 
        
    #redefine 
    def set_size(self, new_size): 
        self.__size = new_size

oscar = Fish() 
oscar.get_size()

bert = Fish() 
bert.__size = "small"
bert.get_size()

fin = Fish()
fin.set_size("Smallest") 
fin.get_size()
