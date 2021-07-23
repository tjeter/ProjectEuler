/*
  The prime factors of 13195 are 5, 7, 13 and 29.

  What is the largest prime factor of the number 600851475143?
 */

#include <stdio.h>
#include <stdlib.h>

int
main(){
	long number = 600851475143;

	for(long i = 2; i <= number; i++){
		while((number % i) == 0){
			printf("%ld\n", i);
			number /= i;
		}
	}
	//printf("The largest prime factor of the number 600851475143 is: %ld\n", number);

	if(number < 1){
		printf("Yikes, you're WRONG!!!");
	}
	
	return 0;
}
