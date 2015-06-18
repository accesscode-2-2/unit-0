#Objective 
1. Demonstrate the ability to both define and call a function
2. Demonstrate an understanding of *abstraction*, *D.R.Y*, and *Scope*

# Functions

The anatomy of a `function` can be broken down into two pieces:  
1. Signature  
2. Body

What does this look like?

<img src="https://raw.githubusercontent.com/accesscode-2-2/unit-0/master/lessons/week-2/images/function_anatomy%402x.png" width="400" />

####Signature
A functions signature provides a high level description of how it works. There are 3 parts to a function signature:   
1. name  
2. return type  
3. parameters  

<img src="https://raw.githubusercontent.com/accesscode-2-2/unit-0/master/lessons/week-2/images/signature.png" width="200" />

**name:** Simliar to a variable, a function has a name so that we humans can easily reference it from our code. In the example above, the name of our function would be `sum`. 

So how do we ask a function to execute?

```c
printNewLine();
```

The code above is *calling* the `printNewLine` function. When we *call* a function, we're asking it to execute the logic contained within it's body. Without the parentheses, we would be referencing our fuction, NOT executing.  

> **Demo**

**return type:** Functions don't only perform logic, but they can also return a result. A good example would be a `function` that is meant to sum 2 numbers. The logic of this function needs to not only add the 2 numbers together, but it needs to return the result. Otherwise, the sum would be completely inaccessible by the rest of our code, and therefore, useless. When we want to return a result from our function, we use the `return` keyword.

> **sum function:**
```c
int sum() {
  int three = 3;
  int five = 5;
  return three + five;
}

```c
int threePlusFive = sum();
```

> **Demo**

**parameters:** In computer programming, a parameter is a special kind of variable, used in a subroutine (function) to refer to one of the pieces of data provided as input to the subroutine (function). - [Wikipedia](https://en.wikipedia.org/wiki/Parameter_(computer_programming))

For example:

```c
int sum() {
  int a = 5;
  int b = 3;
  return a + b;
}
```

The above `function` would always return a value `8`. If we wanted to sum `1 + 2` our function would be inadequate. Through the concept of parameters, we can create a [*generic function*](http://www.answers.com/Q/What_does_generality_means_in_context_of_programming).

By generalizing our `sum` function, we can now apply it to **any context** where we may need to sum two numbers.

```c
int sum(int a, int b) {
  return a + b;
}
```

> **Demo**  

> **Exercise**: Create function for each of the main operators: +, -, *, /, that takes 2 parameters (float or int) and returns the correct result

> **Demo**

## ¡Core Concepts!

### Abstraction

In computer science, *abstraction* is a technique for managing complexity of computer systems. It works by establishing a level of complexity on which a person interacts with the system, suppressing the more complex details below the current level. The programmer works with an idealized interface (usually well defined) and can add additional levels of functionality that would otherwise be too complex to handle. For example, a programmer writing code that involves numerical operations may not be interested in the way numbers are represented in the underlying hardware (e.g. whether they're 16 bit or 32 bit integers), and where those details have been suppressed it can be said that they were *abstracted* away, leaving simply numbers with which the programmer can work. 

&mdash;  
https://en.wikipedia.org/wiki/Abstraction_(computer_science)

### Don't Repeat Yourself (D.R.Y)

In software engineering, don’t repeat yourself (DRY) is a principle of software development, aimed at reducing repetition of information of all kinds, especially useful in multi-tier architectures. The DRY principle is stated as “Every piece of knowledge must have a single, unambiguous, authoritative representation within a system.” ... When the DRY principle is applied successfully, a modification of any single element of a system does not require a change in other logically unrelated elements. Additionally, elements that are logically related all change predictably and uniformly, and are thus kept in sync. 

&mdash;  
https://en.wikipedia.org/wiki/Don't_repeat_yourself

### Scope

Scope refers to the visibility of variables and methods in one part of a program to another part of that program.

&mdash;
https://en.wikiversity.org/wiki/Introduction_to_Programming/Scope

> **Exercise**: Write a function that takes an array of ints and returns the largest value. Example: {5, 2, 3, 6, 8, 124} would return 124
> **Exercise**: Do the same exercise as above but return the smallest number. Example: {5, 2, 3, 6, 8, 124} would return 2

> **Exercise**: Refactor your code from Tuesday. One thing that we did over and over was printing the array. Make a function that takes an array as a parameter and prints out each value of the array. You can also abstract the bubble sort logic into a function called `bubbleSort` that takes an `int` array and sorts it. 

> **Bonus Exercise:** Do the previous exercises in Swift!

> **Super Bonus Exercise: DRAWING!** 
> 1. Clone the following repo - https://github.com/accesscode-2-2/unit-0-c-functions
> 2. Run the code
> 3. Extend the functionality of the code to include more shapes. Use functions to make your drawing easier / more robus.
