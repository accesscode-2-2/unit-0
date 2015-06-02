# Objectives
1. Declare variables of different types
2. Print different typed variable to the console

# Variables

A variable is a name that has an associated value. Variables allow us to store and reference data in our program.
```objective-c
int age = 42;
```

In the code above, ```age``` is a variable that stores the value 42; Every time you reference ```age``` in your program, the computer
will know that you mean 42.

# Types

In Objective-C, each variable is preceded by a specific type. These types serve a few purposes:
1. Allow the system to resposibly manage memory
2. Help by providing context
3. Make your code safer

### Primitive types

```int``` - whole numbers
```char```
```float```
```double```
```BOOL``` - YES or NO, 1 or 0, true or false

struct Point {
  int x;
  int y;
}
struct Rectangle {
  Point origin;
  int width;
  int height;
}
```


[http://iosdevelopmenttutorials.com/primitive-data-types-objective-c/](http://iosdevelopmenttutorials.com/primitive-data-types-objective-c/)

### Objects

```objective-c
NSString *myName = @"Mike";
UIColor *green = [UIColor greenColor];
```


