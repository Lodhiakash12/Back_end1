def menu():
    print("Srno.  Items  ")
    print("1.     Chinese")
    print("2.     South")
    print("3.     Contenental")
    
def line():
    print("*"*67)
    
def choice():
    x=int(input("Enter Choice:"))
    a=120
    b=160
    
    if x==1:
          print("Selected Noodels")
          line()
          y=int(input("Enter Quantity:"))
          line()
          sum=a*y
          print("Sum:",sum)
          line()
          return sum
    elif x==2:
         print("Selected Manchurian")
         line()
         y=int(input("Enter Quantity:"))
         line()
         sum=b*y
         print("Sum:",sum)
         line()
         return sum
    elif x==3:
         print("Selected Rice")
         line()
         y=int(input("Enter Quantity:"))
         line()
         sum=a*y
         print("Sum:",sum)
         line()
         return sum
    else:
        print("Invalid Choice")
        line()
        return 0
        
def ch():
    x=int(input("Enter Choice:"))
    a=120
    b=160
    
    if x==1:
          print("Selected Dosa")
          line()
          y=int(input("Enter Quantity:"))
          line()
          sum=a*y
          print("Sum:",sum)
          line()
          return sum
    elif x==2:
         print("Selected IDli")
         line()
         y=int(input("Enter Quantity:"))
         line()
         sum=b*y
         print("Sum:",sum)
         line()
         return sum
    elif x==3:
         print("Selected Vada")
         line()
         y=int(input("Enter Quantity:"))
         line()
         sum=a*y
         print("Sum:",sum)
         line()
         return sum
    else:
        print("Invalid Choice")
        line()
        return 0
        
def con():
    x=int(input("Enter Choice:"))
    a=120
    b=160
    
    if x==1:
          print("Selected Pasta")
          line()
          y=int(input("Enter Quantity:"))
          line()
          sum=a*y
          print("Sum:",sum)
          line()
          return sum
    elif x==2:
         print("Selected Bowls")
         line()
         y=int(input("Enter Quantity:"))
         line()
         sum=b*y
         print("Sum:",sum)
         line()
         return sum
    elif x==3:
         print("Selected Chicken")
         line()
         y=int(input("Enter Quantity:"))
         line()
         sum=a*y
         print("Sum:",sum)
         line()
         return sum
    else:
        print("Invalid Choice")
        line()
        return 0
        
def chinese():
    line()
    print("Srno.  Item        price")
    print("1.     Noodels     120")
    print("2.     Manchurian  160")
    print("3.     Rice        120")
    line()
    return choice()
     
def south():
    line()
    print("Srno.  Item        price")
    print("1.     Dosa        120")
    print("2.     IDli        160")
    print("3.     Vada        120")
    line()
    return ch()
    
def contenental():
    line()
    print("Srno.  Item        price")
    print("1.     Pasta       120")
    print("2.     Bowls       160")
    print("3.     Chicken     120")
    line()
    return con()
