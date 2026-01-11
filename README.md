🏦 Bank Account System in C++ (Exception Handling)

A simple C++ console application that demonstrates Object-Oriented Programming (OOP) concepts such as constructors, destructors, exception handling, and dynamic memory allocation through a real-world bank account scenario.

📌 Overview

This program simulates a basic bank account system where users can:

Create a bank account

Withdraw money safely

Handle invalid operations using exceptions

The project focuses on clean logic and learning purposes, making it ideal for students and beginners in C++.

✨ Features

✅ Account creation using constructors

❌ Prevents account creation with negative balance

💸 Prevents withdrawal if balance is insufficient

✔️ Allows successful withdrawal

⚠️ Uses try, catch, and throw for exception handling

🧹 Uses destructors to show object destruction

🧠 Demonstrates safe usage of new and delete

🛠️ Concepts Covered

Classes & Objects

Constructors and Destructors

Exception Handling

Dynamic Memory Management

Encapsulation

📂 Project Structure
bankAccount.cpp
README.md

▶️ How the Program Works

The program demonstrates three test cases:

Case 1: Negative Balance

Throws an exception when an account is created with a negative balance.

Case 2: Insufficient Balance Withdrawal

Throws an exception if the withdrawal amount exceeds the available balance.

Case 3: Successful Withdrawal

Withdraws money successfully and updates the remaining balance.

▶️ How to Run
Compile
g++ bankAccount.cpp -o bankAccount

Run
./bankAccount

🧪 Sample Output
Constructor called for Ali
Case 1 Of Exception: Invalid Account as it is Negative balance

Constructor called for Sara
Case 2 Of Exception: Withdrawal Failed Balance is Insufficient
Destructor called for Sara

Constructor called for Ahmed
Withdrawal successful. Your Remaining Balance is : 1500
Destructor called for Ahmed

🚀 Future Improvements

Use std::exception instead of string literals

Add deposit functionality

Use STL containers for multiple accounts

Add file handling for data persistence

Improve code using modern C++ (RAII)

👨‍💻 Author

Muhammad Hamza Zia
C++ Student & Learner

If you find this project useful, feel free to ⭐ the repository!
