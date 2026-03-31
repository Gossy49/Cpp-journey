# Day 3

## Topic
Loops and menu-based program design

## Project
Simple ATM System

## Description
This program simulates a basic ATM system. It allows the user to check their balance, deposit money, withdraw money, and exit the system. The program runs continuously using a loop until the user chooses to exit.

## What I Learned
- How to use loops (`while`) to create a continuously running system
- How to build a menu-based program
- How to manage and update program state (balance)
- How to use conditional statements for multiple user choices
- Basic input validation using `cin.fail()`
- Preventing invalid operations such as negative input and overdrawing

## How It Works
- The system starts with an initial balance
- A menu is displayed to the user
- The user selects an option (1–4)
- Based on the selection:
  - Check balance displays current balance
  - Deposit adds money to the balance
  - Withdraw subtracts money if sufficient funds are available
  - Exit stops the program
- The system continues running until the user exits

## Key Features
- Continuous execution using a loop
- Balance updates after each transaction
- Prevention of overdraft (insufficient funds)
- Basic handling of invalid (non-numeric) input

## How to Run the Program

### Compile
```bash
g++ atm_system.cpp -o atm_system

#Run 
./atm_system