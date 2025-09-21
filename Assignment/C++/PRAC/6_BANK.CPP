#include <iostream.h>
#include <conio.h>

class BankAccount {
private:
    float balance;   

public:
     
    BankAccount(float initialBalance) {
        if(initialBalance < 0) {
            balance = 0;
            cout << "Initial balance invalid. Setting balance to 0.\n";
        } else {
            balance = initialBalance;
        }
    }

     
    void deposit(float amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << "\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

     
    void withdraw(float amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << "\n";
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

     
    void displayBalance() {
        cout << "Current balance: " << balance << "\n";
    }
};

void main() {
    clrscr();   

    BankAccount account(1000);    

    account.displayBalance();

    account.deposit(500);       
    account.displayBalance();

    account.withdraw(300);       
    account.displayBalance();

    account.withdraw(1500);     

    getch();   
    
}