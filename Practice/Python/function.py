#function with no argument & return valu
def printline():
    print("*"*50)

printline()

#function with argument & no return value


def add(x,y):
    print("Addition:",x+y)

add(3,6)

#function with argument & return value

n1=int(input("Enter n1:"))
n2=int(input("ENter N2:"))
       

def sub(a,b):
    return a-b
ans=sub(n1,n2)

print("Substraction:",ans)

