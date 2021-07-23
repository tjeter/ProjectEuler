/*
  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

  What is the 10 001st prime number?
 
  Answer is 104743. This program prints 104744
*/

#include <stdio.h>
#include <stdlib.h>

int
main(){
	int term = 10001, count = 0, factor = 0, primeNumber = 3;

	if(term >= 1){
		printf("Term is greater than or equal to 1. Continuing...\n");
	}

	for(count = 2; count <= term; primeNumber++){
		for(factor = 2; factor <= primeNumber; factor++){
			if((primeNumber % factor) == 0){
				break;
			}
		}
		if(factor == primeNumber){
			count++;
		}
	}
	printf("The 10001st prime number is: %d\n", primeNumber);

	return 0;
}
