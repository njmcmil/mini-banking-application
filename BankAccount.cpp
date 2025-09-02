#include "BankAccount.h"


    //Reminder:
    //:: tells the compiler it belongs to class "BankAccount"
    //: is a member initializer list, used to initialize member variables before constructor body runs
    BankAccount::BankAccount(double b) : accountNumber(generateRandAccNum()), balance(b) {}

    //random number generator for bank account number
    int BankAccount::generateRandAccNum()
    {
        static bool seeded = false;
        if(!seeded) 
        {
            srand(time(NULL));
            seeded = true;
        } 
     return rand();
    }

    //Getter for account number used in bank account info method
    int BankAccount::getAccountNum()
    {
        return accountNumber;
    }

    //Base method getBalance() : used the same in every derived class
    double BankAccount::getBalance()
    {
    return balance;
    }

    //Base method for create bank account
    void BankAccount::CreatedBankAccount()
    {
    std::cout << "*** Bank Account ***" << std::endl;
    std::cout << "Account #" << accountNumber << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
    }






