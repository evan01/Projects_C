//
//  test.c
//  Practice
///Users/evanknox/Documents/WORKSPACE/Practice/betterArrays.c
//  Created by Evan Knox on 2015-05-03.
//  Copyright (c) 2015 NaliApplications. All rights reserved.
//
#include "test.h"

/* copy input to output; 1st version */
int main(){
    //Declare one integer
    int c;
    
    printf("%s","Hello World!");
    //The value of that integer is whatever you type
    c = getchar();
    
    //EOF means when you hit the enter button
    while (c != EOF) {
        //This will print the char!
        putchar(c);
        //This will get the next char
        c = getchar();
    }
    
    
    
    
}