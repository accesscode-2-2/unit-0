### 06/06

### Objectives
*  Use git to sync your repository between your computer and github
*  Control the flow of logic through your program with if/else statements

### GitX
http://gitx.frim.nl

![Image of Yaktocat]
(http://3.bp.blogspot.com/-EIvLehT4a-U/Ti2OaDh9V-I/AAAAAAAAAeg/uCEpZpYg22o/s1600/Bildschirmfoto+2011-07-25+um+17.39.21.png)

### Exercise #1

Push Thursdays homework to a remote repository. Once pushed, navigate to one of your peers github profiles. Fork their repository, make an edit, and submit a pull request.

### If/Else

We've spent a little time talking about basic boolean expressions, such as:

``` c
BOOL isRaining = NO;
BOOL tenIsGreaterThanSeven = 10 > 7;
```

Now we can take it step further by introducing boolean logic. A basic pattern would be:

> If expression is true, do something. Otherwise, do something else. 

``` c
if (tenIsGreaterThanSeven) {
  NSLog(@"The world is at peace");
} else {
  NSLog(@"instanity");
}
```

It can also get very complex, sometimes resulting in multiple layers of nested statements. Boolean statements are the result of something that we haven't discussed yet: **state**. **State** is unavoidable, but introduces complexity into your program. The more state, the more room for error. If you find yourself with deeply nested boolean statements, odds are you need to take a step back and rethink that section of your program.

``` c
if (tenIsGreaterThanSeven) {
  if (!isRaining) {
    NSLog(@"everything is perfect");
  } else {
    NSLog(@"oops... forgot my umbrella. At least 10 > 7");
  }
} else {
  NSLog(@"instanity");
}
```

https://gist.github.com/mikekavouras/0b51b2481dd971d5113e


### Exercise #2

There is an Xcode project on Github (https://github.com/accesscode-2-2/IfElse). Fork the repo and add some logic. 
When you're finished, create a pull request.

### 06/07

### More boolean logic

We talked about boolean logic in the context of entering a club (https://gist.github.com/mikekavouras/a22d2512ed5014465622). Let's take it a step further. The following gist lays out requirements for different scenarios. Your job is to write the logic to implement these requirements. 
https://gist.github.com/mikekavouras/321df03634d9ebeca5ff

### Exercises

Madlibs

This program should prompt the user for a minimum of six inputs (text inputs with at least one number) and then print out your "mad lib" result! Here is a sample partial run:

Sample input:

  Enter an adjective: purple
  Enter another adjective: ancient
  Enter a noun: dragon
  Enter another noun: spoon
  
Sample output:

  Here is your mad lib!!
  The purple bear went into the ancient house.
  There she saw a dragon and a spoon.


### Homework
