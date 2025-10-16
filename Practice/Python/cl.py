class Bank:
    def acc(self,name,acno,balance):
        self.name=name
        self.acno=acno
        self.balance=balance
        print("Hello",name,"Your AccNo:",acno,"Balance:",balance)
    def deposit(self,amount):
        self.amount=amount
        self.balance=self.balance+amount
        print("Deposited:",amount,"New Balance:",self.balance)
    def withdraw(self,amount):
        self.amount=amount
        self.balance=self.balance-amount
        print("Withdrawn:",amount,"New Balance:",self.balance)
    def showbalance(self):
        print("Balance:",self.balance)
b1=Bank()
b1.acc("Aakash",2362763,53363)
 
while True:
    print("1. Deposit")
    print("2. Withdrawl")
    print("3. Balance")
    print("4. Exit")
    x=int(input("Enter Choice:"))
    if x==1:
        amount=int(input("Enter Amount"))
        b1.deposit(amount)
    elif x==2:
        amount=int(input("Enter Amount"))
        b1.withdraw(amount)
    elif x==3:
        b1.showbalance()
        
    elif x==4:
        print("Thank You!")
        break
    else:
        print("Invalid Choice")
