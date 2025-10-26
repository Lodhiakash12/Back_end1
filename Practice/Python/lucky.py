import random

l=[]
lucky=[]

for i in range(1,101):
    l.append(i)
for num in range(10):
    num=random.choice(l)
    lucky.append(num)
    l.remove(num)
print("L:",l)
print("Lucky:",lucky)
