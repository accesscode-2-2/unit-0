//
//  main.c
//  BubbleSort
//
//  Created by Michael Kavouras on 6/15/15.
//  Copyright (c) 2015 Mike Kavouras. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // 1.
    // Jovanny
    // create an array of 10 ints from user input
    int userNumbers[10];
    int input;
    int i;
    printf("Yo dude, you, like, need 10 values. Hook it up!\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        userNumbers[i] = input;
    }
    
    // 2.
    //  Chris
    // store the size of the array in a variable called count
    
    int count;
    count = sizeof(userNumbers)/sizeof(int);
    printf("Size of Array: %d\n", count);
    
    // 3.
    // Jackie
    // print array
//    for (int i = 0; i < count; i++ ) {
//        
//        printf("%d", userNumbers[i]);
//        
//    }
    
    // 4.
    // Henna
    // add commas and spaces
    
    for (int i = 0; i < count; i++ ) {
        if (i == count-1) {
            printf("%d", userNumbers[i]);
            
        }
        else{
            printf("%d, ", userNumbers[i]);
        }
    }

    // 6.
    // name
    // refactor so we're not using numbers[i] twice
    
    // 7.
    // name
    // print the first item and the last item
    
    printf("\n");
    printf("first item, %d\n",userNumbers[0]);
    printf("last item, %d\n",userNumbers[count-1]);
    
    // 8.
    // Daniel
    // swap the first item and the last item
    
    int temp;
//    
//    temp = userNumbers[0];
//    
//    userNumbers[0] = userNumbers[count-1];
//    
//    userNumbers[count - 1] = temp;
    
    
    // 8.
    // Jason
    // print array
    for (i = 0 ; i < count; i++) {
        if (i == count -1) {
            printf("%d\n", userNumbers[i]);
        } else {
            printf("%d, ", userNumbers[i]);
        }
            
    }
    
    
    // 9.
    // name
    // swap the 1st and 2nd item if the 1st item is larger
//    if (userNumbers[0] > userNumbers[1]) {
//        
//        temp = userNumbers[0];
//        
//        userNumbers[0] = userNumbers[1];
//        
//        userNumbers[1] = temp;
//        
//    }
    
    // 10.
    // Justine
    // print array
    for (int x = 0; x < count; x++) {
        if (x == count-1) {
            printf("%d\n", userNumbers[x]);
        }else {
            printf("%d, ", userNumbers[x]);
        }
    }
    
    
    // 11.
    // Shena!
    // swap the 2nd and 3rd item if the 2nd item is larger
//    if (userNumbers[1] > userNumbers[2]) {
//        temp = userNumbers[1];
//        userNumbers[1] = userNumbers[2];
//        userNumbers[2] = temp;
//    }
    
    // 12.
    // name
    // print the entire array
    
    for (int x = 0; x < count; x++) {
        if (x == count-1) {
            printf("%d\n", userNumbers[x]);
        }else {
            printf("%d, ", userNumbers[x]);
        }
    }
    
    // 13.
    // Jovanny
    // bubble sort!
    //   Bubble sort has worst-case and average complexity both О(n2),
    //   where n is the number of items being sorted.
    
    for (int i = 0; i < count - 1; i++) {
        printf("New iteration.\n");
        int swapped = 0;
        for (int j = 0; j < count - 1 - i; j++) {
            printf(" Looping\n");
            if (userNumbers[j] > userNumbers[j+1]) {
                temp = userNumbers[j];
                userNumbers[j] = userNumbers[j+1];
                userNumbers[j+1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
    
    
    for (int x = 0; x < count; x++) {
        if (x == count-1) {
            printf("%d\n", userNumbers[x]);
        }else {
            printf("%d, ", userNumbers[x]);
        }
    }
    // 14.
    // name
    // print array
    
    // 15.
    // name
    // optimization
    
    // 16.
    // name
    // print array
    
    return 0;
}
