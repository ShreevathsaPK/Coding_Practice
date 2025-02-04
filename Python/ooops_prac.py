class p:
    def __init__(self,id):
        self.id = id
    def disp_p(self):
        print(f"Parent {self.id}")
class c(p):
    def __init__(self, id , name):
        super().__init__(id)
        self.name = name
    def disp_c(self):
        print(f"CHild {self.name} {self.id}")
    def disp_cp(self):
        print(f"CHild {self.name} {self.id}")
        super().disp_p()
        

newobj = c(1,'shree')
newobj.disp_c()
newobj.disp_cp()