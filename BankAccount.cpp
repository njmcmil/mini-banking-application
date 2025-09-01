#include "BankAccount.h"


    //Reminder:
    //:: tells the compiler it belongs to class "BankAccount"
    //: is a member initializer list, used to initialize member variables before constructor body runs
    BankAccount::BankAccount(double b) : accountNumber(generateRandAccNum()), balance(b) {}


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

    int BankAccount::getAccountNum()
    {
        return accountNumber;
    }

    double BankAccount::getBalance()
    {
    return balance;
    }

    void BankAccount::CreatedBankAccount()
    {
    std::cout << "*** Bank Account ***" << std::endl;
    std::cout << "Account #" << accountNumber << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
    }






