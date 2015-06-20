# Objective

1. Review
2. Demonstrate an understanding of Objects, Classes, and Instances

# Review

**arrays, loops, and functions**

>**Exercise:** Write a function called `reverse` that takes a number (int or float) array as a parameter and returns the array *reversed*  
>**Exercise:** Write a function that takes an int array as a parameter and returns only the even numbers
>**Exercise:** Refactor *HangPerson* to use functions. Abstract out complex logic and repeated code. Be mindful of abstracting out code that is general and could potentially be reused in other programs
>**Exercise:**  
1. Clone the following repo - https://github.com/accesscode-2-2/unit-0-c-functions  
2. Run the code  
3. Extend the functionality of the code to include more shapes. Use functions to make your drawing easier / more robust. Add animation.

## Object
An object is a thing. Think about object-oriented programming as a thing and something you want to do to that thing. This is in contrast to a programming language such as C, known as a procedural programming language. In C, you typically think about what you want to do first and then you worry about the objects, almost the opposite of object orientation.

Kochan, Stephen G. (2012-10-29). Programming in Objective-C (5th Edition) (Developer's Library) (p. 27). Pearson Education. Kindle Edition. 

## Class
![image](http://www.processing.lyndondaniels.com/images/blueprintBranches.jpg)

####Interface
```objective-c
@interface ClassName: NSObject

@end
```

####Implementation
```objective-c
@implementation ClassName

@end
```

## Instance
```objective-c
ClassName *variableName = [[ClassName alloc] init];
```
