/* Q3. Build a class BankAccount with:
- Private members: accountNumber, balance
- Public methods: deposit(double), withdraw(double), getBalance()
Ensure balance is only changed through functions (not directly).
*/ 
#include<iostream>
#include<string>
using namespace std;
class bankAccount{
    private:
    int accountnumber;
    double balance;
    public:
    // Constructor to initialize account number and balance
    bankAccount(int accNum,double initialBalance){
        accountnumber = accNum;
        balance = initialBalance ;
    }
    // Method to deposit money into the account
    void deposit(double amount){
        if(amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    // Method to withdraw money from the account
    void withdraw(double amount){
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal." << endl;
        }
    }
    // Method to get the current balance
    double getBalance()  {
        return balance;
    }
};

// Example usage
int main() {
    bankAccount acc(12345, 1000.0);
    acc.deposit(500);
    acc.withdraw(200);
    cout << "Current Balance: " << acc.getBalance() << endl;
    return 0;
}