/*#include <iostream>
using namespace std;

int main()
{
    int pin = 1234, enteredPin;
    int choice, amount, newPin;
    double balance = 10000;

    cout<<"====== ATM SERVICE ======\n";
    cout<<"Enter PIN: ";
    cin>>enteredPin;

    if(enteredPin !=pin)
    {
        cout<<"Incorrect PIN!\n";
        return 0;
    }

    do
    {
        cout<<"\n===== ATM MENU =====\n";
        cout<<"1. Withdraw Money\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Check Balance\n";
        cout<<"4. Change PIN\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
            case 1:
                cout<<"Enter amount to withdraw: ";
                cin>>amount;

                if(amount <= balance)
                {
                    balance -= amount;
                    cout<<"Withdrawal Successful.\n";
                    cout<<"Remaining Balance: "<<balance<<endl;
                }
                else
                {
                    cout<<"Insufficient Balance!\n";
                }
                break;

            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                balance += amount;
                cout<<"Deposit Successful.\n";
                cout<<"Updated Balance: "<<balance<<endl;
                break;

            case 3:
                cout<<"Current Balance: "<<balance<<endl;
                break;

            case 4:
                cout<<"Enter New PIN: ";
                cin>>newPin;
                pin=newPin;
                cout<<"PIN Changed Successfully.\n";
                break;

            case 5:
                cout<<"Thank You for Using ATM!\n";
                break;

            default:
                cout<<"Invalid Choice!\n";
        }

    } while (choice !=5);

    return 0;
}*/

/*#include <iostream>
using namespace std;

class ATM
{
private:
    int pin;
    double balance;

public:
    ATM()
    {
        pin = 1234;
        balance = 10000;
    }

    bool login()
    {
        int enteredPin;
        cout << "Enter ATM PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin)
        {
            cout << "Login Successful!\n";
            return true;
        }
        else
        {
            cout << "Invalid PIN!\n";
            return false;
        }
    }

    void withdraw()
    {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful.\n";
            cout << "Remaining Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    void deposit()
    {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Deposit Successful.\n";
        cout << "Updated Balance: " << balance << endl;
    }

    void checkBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }

    void changePin()
    {
        int oldPin, newPin;

        cout << "Enter Old PIN: ";
        cin >> oldPin;

        if (oldPin == pin)
        {
            cout << "Enter New PIN: ";
            cin >> newPin;
            pin = newPin;
            cout << "PIN Changed Successfully.\n";
        }
        else
        {
            cout << "Incorrect Old PIN!\n";
        }
    }
};

int main()
{
    ATM atm;
    int choice;

    if (!atm.login())
        return 0;

    do
    {
        cout << "\n====== ATM MENU ======\n";
        cout << "1. Withdraw Money\n";
        cout << "2. Deposit Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Change PIN\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            atm.withdraw();
            break;

        case 2:
            atm.deposit();
            break;

        case 3:
            atm.checkBalance();
            break;

        case 4:
            atm.changePin();
            break;

        case 5:
            cout << "Thank You for Using ATM!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}

*/

// Scope Resolution Operator  method


#include <iostream>
using namespace std;

class ATM
{
private:
    int pin;
    float balance;

public:
    ATM();

    bool login();
    void withdraw();
    void deposit();
    void checkBalance();
    void changePin();
};


ATM::ATM()
{
    pin = 1234;
    balance = 10000;
}


bool ATM::login()
{
    int enteredPin;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin)
    {
        cout << "Login Successful!\n";
        return true;
    }
    else
    {
        cout << "Invalid PIN!\n";
        return false;
    }
}


void ATM::withdraw()
{
    float amount;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= balance)
    {
        balance -= amount;
        cout << "Withdrawal Successful.\n";
        cout << "Remaining Balance: " << balance << endl;
    }
    else
    {
        cout << "Insufficient Balance!\n";
    }
}


void ATM::deposit()
{
    float amount;

    cout << "Enter amount to deposit: ";
    cin >> amount;

    balance += amount;

    cout << "Deposit Successful.\n";
    cout << "Updated Balance: " << balance << endl;
}


void ATM::checkBalance()
{
    cout << "Current Balance: " << balance << endl;
}


void ATM::changePin()
{
    int oldPin, newPin;

    cout << "Enter Old PIN: ";
    cin >> oldPin;

    if (oldPin == pin)
    {
        cout << "Enter New PIN: ";
        cin >> newPin;
        pin = newPin;
        cout << "PIN Changed Successfully.\n";
    }
    else
    {
        cout << "Incorrect Old PIN!\n";
    }
}

int main()
{
    ATM atm;
    int choice;

    if (!atm.login())
        return 0;

    do
    {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Withdraw\n";
        cout << "2. Deposit\n";
        cout << "3. Check Balance\n";
        cout << "4. Change PIN\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            atm.withdraw();
            break;

        case 2:
            atm.deposit();
            break;

        case 3:
            atm.checkBalance();
            break;

        case 4:
            atm.changePin();
            break;

        case 5:
            cout << "Thank You for Using ATM!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}

