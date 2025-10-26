import random

num=random.randint(1,7)

while True:
    x=int(input("Enter Choice:"))
    if x==num:
        print("Correct Choice")
        print("Num:",num)
        break
    elif x>num:
        print("Choosed Higher Number")
    elif x<num:
        print("Choosed Lower Number")
    else:
        print("Try Again")
