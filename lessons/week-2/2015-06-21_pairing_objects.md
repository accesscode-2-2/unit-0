# Objective
1. Understand the benefits of pair programming http://www.wikihow.com/Pair-Program
2. More experiences with classes/objects

## Pair Programming
http://www.wikihow.com/Pair-Program

# In-class assignment: 

## BankAccount & Patron

####Create two classes: BankAccount and Patron
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

####Create one class: Calculator

####For now, our constraints will be:
- Your calculator must be able to add, subtract, multiply, and divide  
- Your calculator should have an accumulator property to hold on to the current calculated value

#### Some suggested "interactions":
- A calculator should be able to change its sign (+/-)
- A calculator should be able to display the reciprocal value of the accumulator (1 / accumulator)
- A calculator should be able to produce the squared value of the accumulator

##### Extra Credit:

Add a memory capability to your calculator:
- Memory Clear // clear memory
- Memory Store // set memory to accumulator
- Memory Recall // set accumulator to memory

