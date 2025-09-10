#include<iostream>
using namespace std;
class BankAccount{
    private:
    long accountNumber;
    string ownerName;
    double balance;
    public:
    BankAccount(long accNum, string owner, double initialBalance){
        accountNumber=accNum;
        ownerName=owner;
        if(initialBalance>=0){
            balance=initialBalance;
        }else{
            balance=0;
            cout<<"Initial balance can't be negative. Setting balance to 0."<<endl;
        }
    }
    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Deposited: $"<<amount<<endl;
        }else{
            cout<<"Deposit amount must be positive."<<endl;
        }
    }
    void withdraw(double amount){
        if(amount>0){
            if(amount<=balance){
                balance-=amount;
                cout<<"Withdrew: $"<<amount<<endl;
            }else{
                cout<<"Insufficient funds for withdrawal of $"<<amount<<endl;
            }
        }else{
            cout<<"Withdrawal amount must be positive."<<endl;
        }
    }
   double getBalance() const{
        return balance;
    }
    string getOwnerName() const{
        return ownerName;
    }
    long getAccountNumber() const{
        return accountNumber;
    }
};
int main(){
    BankAccount account1(123456789, "Nagendra", 500.0);
    BankAccount account2(987654321, "Naga", 100.0);
    BankAccount account3(555666777, "Indra", 200.0);
    BankAccount account4(111222333, "Reddy", -50.0);
    BankAccount account5(444555666, "Kumar", 300.0);
    cout<<"Account 1 - Owner: "<<account1.getOwnerName()<<endl;
    cout<<"Account Number: "<<account1.getAccountNumber()<<endl;
    cout<<" Balance: $"<<account1.getBalance()<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"Performing transactions on Account 1"<<endl;
    account1.deposit(150.0);
    account1.withdraw(100.0);
    account1.withdraw(600.0);
    account1.deposit(-20.0);
    cout<<"Final Balance: $"<<account1.getBalance()<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"Account 4 - Owner: "<<account4.getOwnerName()<<endl;
    cout<<"Account Number: "<<account4.getAccountNumber()<<endl;
    cout<<" Balance: $"<<account4.getBalance()<<endl;   
    account4.deposit(200.0);
    account4.withdraw(50.0);
    cout<<"Final Balance: $"<<account4.getBalance()<<endl;

  
    return 0;
}