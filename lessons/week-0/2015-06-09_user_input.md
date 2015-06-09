### Objectives 
Read user input from the console

We know how to write to the console:

```` objective-c 
NSLog(STRING_FORMAT, ...);
```

How about reading user input from the console? As it turns out, reading user input adds an entirely new dynamic to the 
programs that we write. So how do we do it?

``` c
int i;
scanf("%d", &i);
```

The `scanf` function takes 2 arguments, a string formatter and the ADDRESS of a variable. More specifically, the address of 
the variable that you are using to store the user input.

In the above example, the `scanf` function will only work if the input from the user is of type `int`. So how would we use this practically?

``` C
int age;
scanf("%d", &age);
NSLog(@"You are %d years old!", age);
```

1. Create a variable of type int
2. Ask the user to input their age
3. Print to the console, "You are {age} years old!"

### Exercises

> **Age and Favorite Number**  
Ask a user for their age and favorite number. Then print it back out in the console.

> **Dumb Calculator**  
Make a simple calculator that takes 3 numbers and adds them together.
** bonus challenge: make it output the average

### Bonus Exercise

A C string is defined as an array of chars. We haven't discussed arrays, so this isn't mandatory. If you're interested in how to use strings in the above examples, you can take a look at the following code:

``` C 
char name[256];
int age;

scanf("%d", &age);
NSLog(@"You are %d years old!", age);

scanf("%s", &name);
NSLog(@"And your name is %s!", name);
```
> **Additional Reading**  
Arrays in C: http://www.tutorialspoint.com/cprogramming/c_arrays.htm
