#include "CheckingAccout.h"



CheckingAccount::CheckingAccount(double b) : BankAccount(b) {}


//Monthly fee based on balance, fee == 12
void CheckingAccount::applyMonthlyFee(double fee)
{
    if(getBalance() >= 1500)
    {
        std::cout << "Monthly fee waived.\n";
    } else
    {
        Withdraw(12);
    }
}

//Overriding withdraw to put in place an overdraft limit
void CheckingAccount::Withdraw(double amount)
{
    if (balance - amount >= -overdraftLimit)
    {
        balance-= amount;
        std::cout << "Withdraw Successful.\nBalance: " << balance << std::endl;
    } else {
        std::cout << "Withdraw denied. Exceeds overdraft limit!" << std::endl;
    }
}

//Overriding Bank Account information for checking account
void CheckingAccount::CreatedBankAccount()
{
    std::cout << "*** Checking Account ***" << std::endl;
    std::cout << "Account #" << accountNumber << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}
