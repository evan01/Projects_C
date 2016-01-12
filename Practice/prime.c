#include <stdio.h>

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

int main ()
{
  printf ("Hello World!\n");
  printPrimes(1,1000);
  
}

