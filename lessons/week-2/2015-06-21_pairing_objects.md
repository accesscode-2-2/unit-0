# Objective
1. Understand the benefits of pair programming http://www.wikihow.com/Pair-Program
2. More experiences with classes/objects

## Pair Programming
http://www.wikihow.com/Pair-Program

# In-class assignment: 

## BankAccount & Patron

####Create two classes BankAccount and Patron
- A BankAccount has a balance
- A Patron has a name, an account, and his/her “pocket”.

####For now, our constraints will be:
- A patron can only interact with one account ( 1 <=> 1   )
- An account can interact with many patrons   ( 1 <=> many)
- We will deal with dollars only, no cents

#### Create a program that creates objects of these types and have them interact with each other.

##### Some suggested “interactions”:
- An account should allow withdrawals and deposits
- A patron can get from and put money in the account
- Both should be able to show their current balance

##### Extra Credit:
- Make it so a patron can interact with multiple accounts
- Prevent the possibility of a Patron performing an overwithdrawl
- Prevent the possibility of depositing more than you currently have in your pocket


## Calculator
It’s time now to define a new class. We’re going to make a Calculator class, which will be a simple four-function calculator you can use to add, multiply, subtract, and divide numbers. Similar to a regular calculator, this one must keep track of the running total, or what’s usually called the accumulator. So, methods must let you set the accumulator to a specific value, clear it (or set it to zero), and retrieve its value when you’re done. Program 4.6 includes the new class definition and a test program to try your calculator.
