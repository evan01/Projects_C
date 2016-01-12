package main;/*
 * Created by evanknox on 2015-10-21.
 */

public class FizzBuzz {
    public static void main(String args[]){

        for(int i=3;i<100;i++){
            System.out.println("Number is:"+i);
            if (i%3 == 0)
                System.out.print("Fizz");
            if(i%5 == 0)
                System.out.print("Buzz");

            System.out.print("\n");
        }
    }
}
