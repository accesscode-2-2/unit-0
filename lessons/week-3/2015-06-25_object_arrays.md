# Objective
1. Be able to discern between the two Array classes in Objective-C

# NSArray + NSMutableArray

In Objective-C, arrays are not built into the language as they are in C. Instead, they're classes provided for us in the Foundation library.
There are two different classes for dealing with arrays: `NSArray` and `NSMutableArray`.

#### [NSArray](https://developer.apple.com/library/prerelease/ios/documentation/Cocoa/Reference/Foundation/Classes/NSArray_Class/index.html)
`NSArray` is the base class for dealing with Arrays in Objective-C. `NSArray` represents an **immutable** array, meaning once it has been created it can not be changed. This 
is different from `NSMutableArray`, which is a mutable subclass of `NSArray`. 

```objective-c
NSArray *myArray = [NSArray arrayWithObjects:@"first thing", @"second thing", @"third thing", nil];
```

#### [NSMutableArray](https://developer.apple.com/library/prerelease/ios/documentation/Cocoa/Reference/Foundation/Classes/NSMutableArray_Class/index.html#//apple_ref/occ/cl/NSMutableArray)
`NSMutableArray` is a concrete subclass of `NSArray`, meaning it has all of the functionality of `NSArray`. It also provides us with additional methods for adding, removing, and altering items within an array. 

```objective-c
NSMutableArray *myArray = [NSMutableArray arrayWithObjects:@"first thing", @"second thing", @"third thing", nil];
```

The correct way to access the items of an instance of `NSArray` or `NSMutableArray` is by sending the `objectAtIndex:` message, passing the desired parameter as a parameter.

```objective-c
NSLog(@"%@", [myArray objectAtIndex:0]); // "first thing"
NSLog(@"%@", [myArray objectAtIndex:1]); // "second thing"
```

You can also access items via bracket notation, like we did in C, however, if you attempt to access an index that is "out-of-bounds" your program will crash. Sending the `objectAtIndex:` message will fail silently if the index is out-of-bounds.

```objective-c
NSString *firstItem = myArray[0]; // "first thing"
NSString *tenthItem = myArray[9]; // *** Terminating app due to uncaught exception 'NSRangeException', reason: '*** -[__NSArrayM objectAtIndex:]: index 9 beyond bounds [0 .. 2]'
```
