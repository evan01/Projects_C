//
//  prime.c
//  Practice
//
//  Created by Evan Knox on 2015-05-03.
//  Copyright (c) 2015 NaliApplications. All rights reserved.
//

#include "prime.h"

void printPrimes(int start, int end) {
    
    int number;//declare a number
    
    //Set numbers value to be start and count up to the end number
    for (number=start;number<=end;number++){
        int divisor;
        //Assume that the number IS a prime number
        int prime=1;
        //This is the big statement! From 2...start
        for (divisor=2;divisor<number;divisor++){
            //If the remainder of number over the incrementing divisor is 0, then it's not a prime
            //The divisor increments all the way from the start to end that we initially passed in.
            if(number%divisor==0){
                prime=0;
            }
        }//for divisor
        
        if(prime==1){
            printf("%d, ",number);
        }
    }//for number
    
}

int main (){
    temperature();
    
}
/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */
void temperature() {
    float fahr, celsius; float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    /* lower limit of temperatuire scale */ /* upper limit */
    /* step size */
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0); printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

