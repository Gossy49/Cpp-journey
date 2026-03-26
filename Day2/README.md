# Day 2

## Topic
Input and output with a simple embedded-style simulation

## Project
Smart Temperature Monitor

## Description
This program simulates a basic temperature monitoring system. It reads a temperature value from the user, classifies the temperature level, and displays the appropriate system response, including fan activation and warning messages.

## What I Learned
- Using the `std` namespace to simplify code (`using namespace std;`)
- How to use logical operators
- How to take numeric input using `cin`
- How to display output using `cout`
- How to use conditional statements (`if`, `else if`, `else`)
- How embedded system logic can be simulated in C++

## How It Works
- The user inputs a temperature value
- The program classifies the temperature as low, normal, or high
- If the temperature is high, the fan is turned ON
- If the temperature exceeds a critical threshold, a warning is displayed

## File
- `input_output.cpp`