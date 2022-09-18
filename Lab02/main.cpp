#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {

    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout<<"account1: "<<account1.getName()<<"balance is $"<<account1.getBalance();
    cout<<"\naccount2: "<<account2.getName()<<"balance is $"<<account2.getBalance();
    
    cout<<"\n\nEnter deposit amount for account1: ";
    int depositAmount;  cin>>depositAmount;

    cout<<"adding"<<depositAmount<<"to account balance";

    account1.deposit(depositAmount);

    cout<<"\n\naccount1: "<<account1.getName()<<"balance is $"<<account1.getBalance();
    cout<<"\naccount2: "<<account2.getName()<<"balance is $"<<account2.getBalance();

    cout<<"\n\nEnter deposit amount for account2: ";  cin>>depositAmount;
    cout<<"adding"<<depositAmount<<"to account2 balance ";

    account2.deposit(depositAmount);

    cout<<"\n\naccount1: "<<account1.getName()<<" balance is $"<<account1.getBalance();
    cout<<"\naccount2: "<<account2.getName()<<" balance is $"<<account2.getBalance()<<endl;

    cout<<"\n\nEnter withdraw amount for account1: ";
    int withdrawAmount; cin>>withdrawAmount;

    if (withdrawAmount <= account1.getBalance()){
        account1.withdraw(withdrawAmount);
        cout<<"\nWithdrawing $"<<withdrawAmount<<" account balance of account1.";
    } else {
        cout<<"\nWithdrawal amount exceeded account balance.";
    }
    cout<<"\nBalance: "<<account1.getBalance();

    cout<<"\n\nEnter withdraw amount for account2: ";   cin>>withdrawAmount;

    if (withdrawAmount <= account2.getBalance()){
        account2.withdraw(withdrawAmount);
        cout<<"\nwithdrawing $"<<withdrawAmount<<" account balance of account2.";
    } else {
        cout<<"\nWithdraw amount exceeded account balance.";
    }
    cout<<"\nBalance: "<<account2.getBalance()<<endl;
    
        
    
    return 0; 
}

