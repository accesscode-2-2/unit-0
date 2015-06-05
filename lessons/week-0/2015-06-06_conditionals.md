### GitX
http://gitx.frim.nl

![Image of Yaktocat]
(http://3.bp.blogspot.com/-EIvLehT4a-U/Ti2OaDh9V-I/AAAAAAAAAeg/uCEpZpYg22o/s1600/Bildschirmfoto+2011-07-25+um+17.39.21.png)

### Input

The `scanf` function pauses your program and waits for user input. We're going to be using this practice 
handling unpredictable behavior to our program.

``` c
int age;

scanf("%d", &age);

NSLog(@"%d", age);
```

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
