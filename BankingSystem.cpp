#include <iostream>
#include <ctime>
using std::string;



class BankAccount
{
    protected:
        int AccountNum;
        double balance;
        string password;

    public:
        string Username;

    int generateRandAccNum()
    {
        return rand();
    }
        
    BankAccount(string name, string pwd, double initialBalance)
    {
        Username = name;
        password = pwd;
        AccountNum = generateRandAccNum();
        balance = initialBalance;

        createdBankAccount();
    }

    int getBalance()
    {
        return balance;
    }

    void Deposit()
    {
        std::cout << "Deposit Amount: ";
        double amount;
        std::cin >> amount;
        balance += amount;
    }

    int Withdraw()
    {
        std::cout << "Withdraw Amount: ";
        double amount;
        std::cin >> amount;

        if(amount > balance)
        {
             std::cout << "Invalid amount\n";
            return -1;
        } else if(amount <= 0)
        {
            std::cout << "Invalid amount\n";
            return -1;
        }

        balance -= amount;
        return balance;
    }

    void createdBankAccount()
    {
        std::cout << "...\nBank Account Succesfully Created!\n";
        std::cout << "Account Number: #" << AccountNum << std::endl;
        std::cout << "Your Username is: " << Username << std::endl;
        std::cout << "Your initial balance is: " << balance << std::endl;

    }


};







int main()
{
 int choice;

do {
srand(time(NULL));
BankAccount* b = nullptr;  // pointer to account
 std::cout << "*********Banking Application*********\n";
 std::cout << "Choose an option: \n" 
           << "1. Set up bank account\n"
           << "2. Deposit\n"
           << "3. Withdraw\n"
           << "4. View Balance\n"
           << "5. Exit" << std::endl;
 std::cout << "*************************************\n" << std::endl;

 
 std::cin >> choice;

 switch(choice)
 {
    case 1: {
        string Username;
        string password;
        double initBalance;

        std::cout << "Enter your username: " << std::endl;
        std::cin >> Username;
        std::cout << "Enter your password: " << std::endl;
        std::cin >> password;
        std::cout << "What will your initial balance be?" << std::endl;
     std::cin >> initBalance;

     b =  new BankAccount(Username, password, initBalance);
 break;
    }
    case 2: {
    if(b != nullptr){
        b->Deposit();
    }else {
        std::cout << "No account exists. Please create one first.\n";
    }
   break;
   }
 }

} while (choice != 5);



    return 0;
}