/*
   A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

   Find the largest palindrome made from the product of two 3-digit numbers.
   */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int readReverse(int original){
	int next = 0;
	
	while(original > 0){
		next *= 10;
		next += (original % 10);
		original = (original - (original % 10)) / 10;
	}

	return next;
}

bool isPalindrome(int original){
	int reverse = readReverse(original);

	if(reverse == original){
		return true;
	}
	return false;
}

int
main(){
	int number = 0, largestPalindrome = 0;

	for(int i = 100; i < 1000; i++){
		for(int j = 100; j < 1000; j++){
			number = i * j;
			
			if(isPalindrome(number)){
				if(number > largestPalindrome){
					largestPalindrome = number;
				}
			}
		}
	}	
	printf("The largest palindrome made from the product of two 3-digit numbers is: %d\n", largestPalindrome);

	return 0;
}
