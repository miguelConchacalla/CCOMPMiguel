#include <string>

using namespace std;

class Account { 
    public:

        // CONSTRUCTOR
        Account(string accountName, int initialBalance) : name{accountName} {
            if(initialBalance > 0) {
                balance = initialBalance;
            }
        }

        void deposit(int depositAmount) {
            if(depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }

        int getBalance() const {
            return balance;
        }

        void setName(string accountName) {
            name = accountName;
        }

        string getName() const {
            return name;
        }

        void withdraw(int withdrawAmount){
            balance = balance - withdrawAmount;
        }

    private:
        string name;
        int balance{0}; // int balance = 0;
};