import menu
total=0
 
def line():
    print("*"*67)

while True:
    line()
    print("Menu")
    line()
    menu.menu()
    line()
    x=int(input("Enter Choice:"))
        
    if x==1:
        total=total+menu.chinese()
    elif x==2:
        total=total+menu.south()
    elif x==3:
        total=total+menu.contenental()
    else:
        print("Invalid Menu Choice")
    
    print("Do u Want To Order Anything Else:")
    line()
    print("Yes=>1,NO=>2")
    line()
    m=int(input("ENter Choice:"))
    line()
    if m==1:
        continue
    elif m==2:
        n=input("Enter Name:")
        line()
        p=int(input("ENter NUmber:"))
        line()
        
        print("Total Amount:",total)
        print("Thank You ",n)
        print("Number:",p)
        break
