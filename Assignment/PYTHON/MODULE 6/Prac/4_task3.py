s1=int(input("ENter s1:"))
s2=int(input("ENter s2:"))
s3=int(input("ENter s3:"))


total=s1+s2+s3

per=total/3
print("Total:",total)
print("Per:",per)

if per>90:
    print("First Class")
elif per>70:
    print("Second Class")
else:
    print("Fail")

