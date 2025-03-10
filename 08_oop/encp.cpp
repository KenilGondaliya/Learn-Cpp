#include <iostream>
#include <vector>

using namespace std;

class BankAccount
{
private:
    string acountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance)
    {
        acountNumber = accNum;
        balance = initialBalance;
    }

    // getter
    double getBalance() const
    {
        return balance;
    }

    // Method to deposite money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalide Deposit Amount";
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Invalid withdrawn amount" << endl;
        }
    }
};

int main()
{
    BankAccount myAccount("1229988", 500);

    myAccount.getBalance();

    myAccount.deposit(200);
    myAccount.withdraw(100);

    return 0;
}
