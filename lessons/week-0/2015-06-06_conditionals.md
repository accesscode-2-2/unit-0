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
