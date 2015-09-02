//
//  main.c
//  ass01
//
//  Created by Steele on 2015-08-19.
//  Copyright (c) 2015 Steele. All rights reserved.
//
/*
Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz"
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for (int i = 0; i <= 100; i++) {
        
        if (i%3==0 && i!=0 && i%5!=0)
        {
            printf("Fizz\n");
            
        }else if (i%5==0 && i!=0 && i%3!=0)
        {
            printf("Buzz\n");
            
        }else if (i%5==0 && i%3==0 && i!=0)
        {
            printf("FizzBuzz\n");
            
        }else
        {
        printf("%i\n", i);
            
        }
    }
    return 0;
}
