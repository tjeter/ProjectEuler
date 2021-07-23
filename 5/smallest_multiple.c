/*
  2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

  What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int
Divisible(){
	int smallest = 2520;
	bool found = false;

	while(!found){
		smallest += 2520;
		bool isDivisible = true;
		
		for(int test = 1; test <= 20; test++){
			if((smallest % test) != 0){
				isDivisible = false;
				break;
			}
		}
		if(isDivisible){
			found = true;
		}
	}
	return smallest;
}

int
main(){
	printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: %d\n", Divisible());

	return 0;
}
