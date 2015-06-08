### Objectives
Create and use custom data structures 

Up to this point, the data types we've been working with have been provided for us by the system: int, float, double, etc. This, for the most part, has been adequate. But what happens as our code base grows? Let's take a look at an example that has obvious limitations...

Original;
https://gist.github.com/mikekavouras/977425b7191f8aab2012

In the above example, we're using variables to define the attributes of two different people, Carl and Justin. In it's current format we don't have a standard for naming these attributes. You'll notice the `justinAge` and `howOldIsCarl` are both referring to age, yet they're totally different patterns.

Luckily, the people who created C realized that this could become a serious problem. Free floating variables, although WE may know what we're trying to say, could lead to confusion with larger files and/or when other programmers are trying to understand our code.

What if we could create our own custom data type (like `int` or `float`) that could totally encapsulate what it means to be a person? In the same way that an int type encapsulates what it means to be a whole number, and a float type encapsulates what it means to be a real number, wouldn't it be nice if we could create something like a person type that encapsulates what it means to be a person?

The correct answer is yes. It would be nice.

It turns out that this is not only possible, but it's encouraged. Part of being a good programmer is planning, and part of planning is organizing our data in a way that makes sense in the context of our program. The above program could be made more readable and much safer to use if we had some sort of standard by which we could define a person. 
Enter `struct`

A struct is exactly what it sounds like, a structure. It's a tool for us to define custom data structures that are a bit more complex than a basic `int` or `float`. Structs are defined OUTSIDE of the `main` function. 

The following code is the basic pattern for a struct:

``` c
struct Name {
  type attribute;
  type attribute;
  type attribute;
}
```

In the above code we are defining a new type, `struct Name`. `struct Name` also has 3 attributes. What does this look like in the real world?

``` c
struct Person {
  int age;
  float weight;
  float height;
}
```

We've created a new data structure of type `struct Person` with 3 attributes. A struct can have 1 attribute, or it can have 100 attributes. There are no restrictions. In this case, we've created a blueprint for what a person might look like. Our `struct Person` is defined by `int age`, `float weight`, and `float height`. Notice that we're not giving our variables values. That's because we're not CREATING a person, we're DEFINING a person. For all intents and purposes, our struct is a "blueprint." So how do we use a struct?

``` c
struct Person mike;
```

First, we need to define a new variable. In this case we're creating a new variable of type `struct Person` with a name of `mike`. 

![image]
(http://i.imgur.com/DLdAVQX.png)

The next thing we need to do is define our attributes.

``` c
mike.age = 26;
mike.height = 5.8;
mike.weight = 169.0;
```

All together now.

``` c
struct Person mike;
mike.age = 26;
mike.height = 5.8;
mike.weight = 169.0;
```

In our Justin and Carl example, we can now user our new data type to create some consistency.

Updated:
https://gist.github.com/mikekavouras/be5b9d7d5d40c093c7c9


