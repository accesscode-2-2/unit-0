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

### Primitive types

```objective-c
int a = 100;
char a = 'a';
BOOL isA100 = YES;
float gravity = 9.8;
double pi = 3.14159265358979323846;
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


