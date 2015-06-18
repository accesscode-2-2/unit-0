#Objective 
1. Demonstrate the ability to both define and call a function
2. Demonstrate an understanding of *abstraction*

# Functions

The anatomy of a `function` can be broken down into two pieces:  
1. Signature  
2. Body

What does this look like?

<img src="https://raw.githubusercontent.com/accesscode-2-2/unit-0/master/lessons/week-2/images/function_anatomy%402x.png" width="400" />

####Signature
A functions signature provides a high level description of how it works. There are 3 parts to a function signature:   
1. return type  
2. name  
3. parameters  

<img src="https://raw.githubusercontent.com/accesscode-2-2/unit-0/master/lessons/week-2/images/signature.png" width="200" />



**return type:** Functions don't only perform logic, but they can also return a result. A good example would be a `function` that is meant to sum 2 numbers. The logic of this function needs to not only add the 2 numbers together, but it needs to return the result. Otherwise, the sum would be completely inaccessible by the rest of our code, and therefore, useless. When we want to return a result from our function, we use the `return` keyword.

> **sum function:**
```c
int sum() {
  int three = 3;
  int five = 5;
  return three + five;
}
```

**name:** Simliar to a variable, a function has a name so that we humans can easily reference it from our code. In the example above, the name of our function would be `sum`. 

So how do we ask a function to execute?

```c
int threePlusFive = sum();
```

The above code declares a new variable a) of type `int` b) with a name of `threePlusFive`. The value of `threePlusFive` is the *returned value* of the function `sum`.

**parameters:** In computer programming, a parameter is a special kind of variable, used in a subroutine (function) to refer to one of the pieces of data provided as input to the subroutine (function). - [Wikipedia](https://en.wikipedia.org/wiki/Parameter_(computer_programming))

For example:

```c
int sum() {
  int a = 5;
  int b = 3;
  return a + b;
}
```

The above `function` would always return a value of 8. If we wanted to sum 1 + 2 our function would fall short. Through the concept of parameters, we can create a *generic function*, will will accept  provide the numbers when we call the function giving it a lot of flexibility. So how do we make our code general? With parameters!

```c
int sum(int a, int b) {
  return a + b;
}
```


### Abstraction

In computer science, *abstraction* is a technique for managing complexity of computer systems. It works by establishing a level of complexity on which a person interacts with the system, suppressing the more complex details below the current level. The programmer works with an idealized interface (usually well defined) and can add additional levels of functionality that would otherwise be too complex to handle. For example, a programmer writing code that involves numerical operations may not be interested in the way numbers are represented in the underlying hardware (e.g. whether they're 16 bit or 32 bit integers), and where those details have been suppressed it can be said that they were *abstracted* away, leaving simply numbers with which the programmer can work. 

&mdash;  
https://en.wikipedia.org/wiki/Abstraction_(computer_science)

### Don't Repeat Yourself (D.R.Y)

In software engineering, don’t repeat yourself (DRY) is a principle of software development, aimed at reducing repetition of information of all kinds, especially useful in multi-tier architectures. The DRY principle is stated as “Every piece of knowledge must have a single, unambiguous, authoritative representation within a system.” ... When the DRY principle is applied successfully, a modification of any single element of a system does not require a change in other logically unrelated elements. Additionally, elements that are logically related all change predictably and uniformly, and are thus kept in sync. 

&mdash;  
https://en.wikipedia.org/wiki/Don't_repeat_yourself
