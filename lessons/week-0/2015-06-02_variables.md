[**Code sample**](https://gist.github.com/mikekavouras/5abfc01fdb77e8c60b8e)  

# Objectives
1. Declare variables of different types
2. Print different typed variable to the console

### Variables

A variable is a name that has an associated value. Variables allow us to store and reference data in our program.
```objective-c
int age = 42;
```

In the code above, ```age``` is a variable that stores the value 42; Every time you reference ```age``` in your program, the computer will know that you mean 42.

### Pointers

A pointer is a variable that points to another variable. Specifically, pointers store the address of another variable.

### Types

In Objective-C, each variable is preceded by a specific type. These types serve a few purposes:  
1. Allow the system to resposibly manage memory  
2. Help by providing context  
3. Make your code safer  

**example:**  
```objective-c 
int sixty = 60;
float pi = 3.1415;
BOOL hasPizza = NO;
```

### Primitive types

* ```int``` - whole numbers
* ```char``` - character
* ```float``` - floating point numbers (real numbers)
* ```double``` - floating point numbers (real numbers)
* ```BOOL``` - YES or NO, 1 or 0, true or false


float vs. double = precision [http://stackoverflow.com/questions/5098558/float-vs-double-precision](http://stackoverflow.com/questions/5098558/float-vs-double-precision)

### Apple's primitive types

* ```NSInteger``` - environment aware int
* ```CGFloat``` - enfironment aware float

> **Homework:**   
Create an iOS app and add some labels to the screen. Use what we learned about string formatters to print various text using the labels. Get creative!!!


> **Further reading:**
[http://iosdevelopmenttutorials.com/primitive-data-types-objective-c/](http://iosdevelopmenttutorials.com/primitive-data-types-objective-c/)

### Objects

```objective-c
NSString *myName = @"Mike";
UIColor *green = [UIColor greenColor];
```


