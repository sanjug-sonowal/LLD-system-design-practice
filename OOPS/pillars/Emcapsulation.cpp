#include<iostream>
#include<string>
using namespace std;

// What is Encapsulation?
// Encapsulate means we hide the data and method or we can say bundling the data + method in a single unit class

class BankAccount{
public:
    string name;
private:
    long long accountNumber;
    double balance;

public:

    double getBalance(){
        return balance;
    }

    void deposit(double balance){
        if(balance <= 0){
            cout<<"Please enter valid amount..!!"<<endl;
            return;
        }
        this->balance += balance;
    }

    void withdraw(double amount){
        if(amount <= 0){
            cout<<"Invalid amount"<<endl;
        }else if(amount > balance){
            cout<<"Insufficient balance"<<endl;
            return;
        }

        balance -= amount;
    }

    void setAccountNumber(long long accountNumber){
        this->accountNumber = accountNumber;
    }

    long long getAccountNumber(){
        return accountNumber;
    }

};

int main(){
    BankAccount b1;
    b1.deposit(4885.55);
    b1.deposit(488.0);
    b1.withdraw(488.0);
    b1.withdraw(4885.55);
    b1.withdraw(1000);

    double bal = b1.getBalance();
    cout<<"Balance = " << bal<<endl;
    return 0;
}