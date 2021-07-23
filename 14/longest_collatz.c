/*
   The following iterative sequence is defined for the set of positive integers:

   		n → n/2 (n is even)
   		n → 3n + 1 (n is odd)

   Using the rule above and starting with 13, we generate the following sequence:

   		13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

   It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

   Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <stdio.h>

int 
main(){
	long i, final;
	long long n;
	int numbers, preservedNs;

	for(i = 2; i < 1000000; i++){
		numbers = 1;
		n = i;

		while(n > 1){
			while(n % 2 == 0){
				n /= 2;
				numbers++;
			}
			if(n > 1){
				n = ((n * 3) + 1);
				numbers++;
			}
		}
		if(numbers > preservedNs){
			preservedNs = numbers;
			final = i;
		}
	}
	printf("Longest Collatz Seq: %d beginning with %ld", preservedNs, final);

	return 0;
}
