/*
  The sum of the squares of the first ten natural numbers is,
		1^2 + 2^2 +...+ 10^2 = 385

The square of the sum of the first ten natural numbers is,
		(1 + 2 +...+ 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
		3025 - 385 = 2640

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float firstNum(){
	float sum = 0;

	for(float i = 0; i <= 100; i++){
		sum += pow(i, 2);
	}
	return sum;
}

float secondNum(){
	float sum = 0;

	for(float i = 0; i <= 100; i++){
		sum += i;
	}

	return pow(sum, 2);
}


int
main(){
	float powerOfSumTwo = secondNum();
	float difference = powerOfSumTwo - firstNum();

	printf("The difference between the sum of the squares of the first 100 natural numbers and the square of the sum is: %f\n", difference);

	return 0;
}
