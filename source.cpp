#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int balance;

public:
    // Constructor
    BankAccount(string n, int b) {
        cout << "Constructor called" << endl;

        if (b < 0) {
            throw "Error: Balance cannot be negative";
        }

        name = n;
        balance = b;
    }

    // Withdraw function
    void withdraw(int amount) {
        if (amount > balance) {
            throw "Error: Not enough balance";
        }

        balance -= amount;
        cout << "Withdraw successful. Balance left: " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Destructor called" << endl;
    }
};

int main() {

    BankAccount* acc = nullptr;

    try {
        // Creating object dynamically
        acc = new BankAccount("Hamza", 500);

        // This will cause exception
        acc->withdraw(800);
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    // Delete object safely
    delete acc;

    cout << "Program continues normally" << endl;

    cout << "\n--- Constructor exception test ---\n";

    try {
        BankAccount* badAcc = new BankAccount("Ali", -100);
        delete badAcc; // never reached
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}
