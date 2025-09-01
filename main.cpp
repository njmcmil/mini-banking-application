#include "User.h"

void displayMiniAppIntro();
User createUserFromInput();
void accountInfo(const User& user);
int  bankAccountOption();
CheckingAccount checkingAccountSetUp();
SavingAccount savingAccountSetUp();
int atmMenu(BankAccount& account);

int main()
{
    displayMiniAppIntro();

    User user = createUserFromInput();
    accountInfo(user);

    int input = bankAccountOption();
    if(input == 1)
    {
        CheckingAccount c = checkingAccountSetUp();
        atmMenu(c);
    } else if (input == 2)
    {
        SavingAccount s = savingAccountSetUp();
        atmMenu(s);
    }else{
        std::cout << "Exiting program..." << std::endl;
        return 0;
    }

    
    


    return 0;
}

void displayMiniAppIntro()
{
    std::cout << "\n\n*** WELCOME TO CHASE ***" << std::endl; //ex. bank
    std::cout << "Step 1: Create an Account\n";
    std::cout << "Step 2: Choose and create a bank account\n";
    std::cout << "Step 3: Discover options provided by Chase\n\n"; 
}


User createUserFromInput()
{
    string username, password, email, phone;

    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;
    std::cout << "Email: ";
    std::cin >> email;
    std::cout << "Phone Number: ";
    std::cin >> phone;

    return User(username, password, email, phone);
}


void accountInfo(const User& user)
{
 std::cout << "\nUser ID: " << user.getUserID()    << '\n' 
              << "Username: " << user.getUsername()  << '\n' 
              << "Password: " << user.getPassword()  << '\n'
              << "Email: "    << user.getEmail()     << '\n'
              << "Phone Number: " << user.getPhoneNumber() << std::endl;
}

int bankAccountOption()
{
    std::cout << "Which Bank account would you like to set up?" << std::endl;
    std::cout << "1. Checking Account" << std::endl;
    std::cout << "2. Savings Account" << std::endl;
    std::cout << "3. Exit" << std::endl;
    int input;
    std::cin >> input;
    return input;
}


CheckingAccount checkingAccountSetUp()
{
    double balance;
    std::cout << "Initial Balance: ";
    std::cin >> balance;

    return CheckingAccount(balance);
}


SavingAccount savingAccountSetUp()
{
    double balance;
    std::cout << "Initial Balance: ";
    std::cin >> balance;

    return SavingAccount(balance);
}

int atmMenu(BankAccount& account)
{
    int choice = 0;
    do {
        std::cout << "\n\n\n*** ATM MENU ***"       << std::endl;
        std::cout << "1. Check Balance"       << std::endl;
        std::cout << "2. Deposit"             << std::endl; 
        std::cout << "3. Withdraw"            << std::endl;
        std::cout << "4. Account Information" << std::endl;
        std::cout << "5. Exit"                << std::endl;

        std::cout << "Enter Choice: ";
        std::cin >> choice;


        switch(choice)
        {
            case 1: 
            {
                std::cout << "\n";
                std::cout << "Current Balance: $" << account.getBalance() << std::endl;
                break;
            }
            case 2: 
            {
                std::cout << "\n";
                double amount;
                std::cout << "Enter deposit amount: ";
                std::cin >> amount;
                account.Deposit(amount);
                break;
            }
            case 3:
            {
                std::cout << "\n";
                double amount;
                std::cout << "Enter withdrawal amount: ";
                std::cin >> amount;
                account.Withdraw(amount);
                break;
            }

            case 4:
            {
                std::cout << "\n";
                account.CreatedBankAccount();
                std::cout << "\n\n";
                break;
            }

            case 5:
            {
                std::cout << "\n";
                std::cout << "Exiting ATM Menu..." << std::endl;
                break;
            }
            default:
            {
                std::cout << "\n";
                std::cout << "Invalid choice. Try again.\n";
            } 
        }

    }while(choice != 5);

    return 0;
}