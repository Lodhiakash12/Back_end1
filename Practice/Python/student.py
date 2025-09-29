s1=int(input("Enter s1:"))
s2=int(input("Enter s2:"))

total=s1+s2

per=total/2

print(total)
print(per)

if per>80:
    print("Distinction")
    
elif per>67:
    print("Pass")
    
else :
    print("fail")