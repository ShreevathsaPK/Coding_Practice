class Student:

    def __init__(self,name):
        self.name = name
    
    
    def display_name(self):
        print("Name of Obj is : {}".format(self.name))

class Firstrower(Student):

    def __init__(self,rollnumber,name):
        self.roll = rollnumber
        super().__init__(name)

    def display_name(self):
        super().display_name()

    def display_child(self):
        print("{}".format(self.roll))
        print("{}".format(self.name)) 


if __name__ == "__main__":

    newobj = Student("Shreevathsa")
    newobj.display_name()

    newobj2 = Firstrower(23,"Shreevathsa")
    newobj2.display_name()
    newobj2.display_child()