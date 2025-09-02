#ifndef BankAccount_H
#define BankAccount_H
#include <iostream>
#include <ctime>

//An abstract class for a bank account in mini-banking-application

class BankAccount 
{
    protected:
        const int accountNumber;
        double balance;
     
        int generateRandAccNum();


    public:

        BankAccount(double b);
    
        virtual int getAccountNum();
        virtual double getBalance();
        //virtual allows derived classes to override
        virtual void Deposit(double amount)  {balance+=amount;}
        virtual void Withdraw(double amount) {balance-=amount;}


        virtual void CreatedBankAccount();

        virtual ~BankAccount() {};
};




#endif