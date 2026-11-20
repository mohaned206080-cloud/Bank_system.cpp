#include <bits/stdc++.h>
using namespace std;
class Account {
    private:
    double balance;
    public:
    Account() {
        balance=0;

    }
     void deposit() {
        double amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        cout<<endl;
        if (amount > 0) {
            balance += amount;
            cout<<"Depositied "<<amount<<" EGP || New balance: "<<balance<<" EGP"<<endl;
        }else {
            cout<<"It isn`t possible. Try again."<<endl;
        }
    }
    void withdraw() {
        double amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        cout<<endl;
        if (amount > balance) {
            cout<<"Error: insufficient funds || Current balance: "<<balance<<" EGP"<<endl;
        }else {
            balance -= amount;
            cout<<"Withdraw "<<amount<<" EGP || New balance: "<<balance<<" EGP"<<endl;
        }
    }
    void showbalance() {
        cout<<"Current balance:  "<<balance<<" EGP"<<endl;
        }
    };
int main() {
    Account a;
    int choice;
    cout<<"=== Bank System ==="<<endl;
    cout<<"1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit"<<endl;
    while (choice) {
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        if (choice < 1 && choice > 4) {
            cout<<"Invalid choice. Try again.";
            continue;
        }
        switch (choice) {
            case 1:
                a.deposit();
                break;
            case 2:
                a.withdraw();
                break;
            case 3:
                a.showbalance();
                break;
            case 4:
                cout<<"Goodbye!"<<endl;
                return 0;

        }
    }
}
