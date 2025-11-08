l1=["Apple","Mango","Banana"]
x=input("Enter STring:")
y=-1

for i in l1:
    y=y+1
    
    if i==x:
        print("String MAtched")
        print("The index:",y)
        break
    else:
        print("No MAtch Found")
