# Objective
1. Proficiency with loops  
2. Ability to manipulate and interate arrays

# 🎉🎉🎉 More Loops 🎉🎉🎉

> **Exercise:** Write a program using a `while` loop that prints the infamous [99 Bottles of Beer](https://en.wikipedia.org/wiki/99_Bottles_of_Beer) song. When you run out of beer, print something along the lines of, "go get more beer."  
> **Exercise:** Write the same program using a `for` loop.   
> **Exercise:** Figure out a 3rd way (using loops) to write the same program

> **Bonus Exercise:** Do it in Swift 😀

# Arrays

![image]
(https://docs.oracle.com/javase/tutorial/figures/java/objects-tenElementArray.gif)

"In computer science, an array data structure or simply an array is a data structure consisting of a collection of elements (values or variables), each identified by at least one array index or key... The simplest type of data structure is a linear array, also called one-dimensional array." [Wikipedia](https://en.wikipedia.org/wiki/Array_data_structure)

Arrays in C are simple collection types. They are declared with a type, and can only contain elements of the same type.
There are two ways to initialize an array.

1. Declare an array with a type and a size
2. Declare an array with a type and a value

```c
// 1. 
int numbers[10];

// 2.
int numbers = {8, 4, 2, 5, 7, 4, 1, 12, 5, 16};
```

Both examples above will initialize an `array` of type `int` with a size of 10 ints. 

### Accessing elements 
An array is useless if we can't access the individual values. We can access specific values in an array by asking for the value at an *index*. The index, also referred to as subscript, is the position (0 based) of an element within an array.

```c
// get the first element 
numbers[0]; // 8

// get the second element
numbers[1]; // 4
```

### Updating values
Once you can access an element within in array, it's fairly trivial to update its value.

```c
numbers[0] = 10;
```

### Arrays and Loops
Arrays and loops go hand-in-hand. Especially `for` loops. Since `for` loops always have an iterator (commonly `i`) it's only natural to use them to iterate though arrays, quickly and effortlessly accessing the element at each index.

```c
for (int i = 0; i < 10; i++) {
  printf("%d", numbers[i]);
}
```

That's all fine and well, but what if the number of elements in our array isn't known until run-time? This is when you start to see the real power of loops.
In C, there's no built in way to determine the number of elements in an array, so we have to do some simple math.

```c
// get number of elements in array
int count = sizeof(numbers) / sizeof(int);
```

What would this look like in the real world?

```c
for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
  printf("%d", arr[i]);
}
```

> **Exercise:** Reimplement the "12 days of Christmas" program using arrays and loops.

> **Additional Reading:** http://c.learncodethehardway.org/book/ex10.html
