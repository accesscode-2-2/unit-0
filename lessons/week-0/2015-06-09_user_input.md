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

``` c
int age;
scanf("%d", &age);
NSLog(@"You are %d years old!"< age);
```

1. Create a variable of type int
2. Ask the user to input their age
3. Print to the console, "You are {age} years old!"

### Exercises
