class A:
    def show(self):
        print("Show A")
class B(A):
    def show(self):
        super().show()
        print("Show B")

b1=B()

b1.show()
        
