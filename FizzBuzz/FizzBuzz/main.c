//
//  main.c
//  FizzBuzz
//
//  Created by Jeremy Petter on 2015-03-11.
//
//

#include <stdio.h>

int main() {
    int count = 0;
    while (count < 100){
        count ++;
        if (count%3 == 0 || count%5 == 0){
            if (count % 3 == 0)
                printf("Fizz");
            if (count%5 == 0)
                printf("Buzz");
        } else {
            printf("%d", count);
        }
        printf("\n");
    }
}
