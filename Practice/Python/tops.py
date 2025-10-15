class Tops:
    def admission(self,sname,course,fees):
        self.sname=sname
        self.course=course
        self.fees=fees
        self.count=0
        print("Hello",sname,",Your Course:",course,"Fees is",fees)
    def installment(self,amount):
        if self.fees>0:
            self.amount=amount 
            self.fees=self.fees-amount
            self.count=self.count+1
            print("Payment Received:",amount)
            print("Installment Number:",self.count)
            print("Remaining Fees:",self.fees)
        elif self.fees==0:
            print("All Fees Paid")
        else:
            print("Overpaid by",-self.fees)
        
    def remain(self):
         print("Fees Remaing:",self.fees)
        
    
    
        
t1=Tops()
t1.admission("Aakash","Full Stack",100000)
while True:
    print("*"*50)
    print("1. Installment")
    print("2. Remaing")
    print("3. Exit")
    print("*"*50)
    choice=int(input("Enter Choice:"))
    print("*"*50)
    if choice==1:
        amount=int(input("ENter Amount:"))
        t1.installment(amount)
    
    elif choice==2:
        t1.remain()
    else:
        break
