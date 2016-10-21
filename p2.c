#include <stdio.h>

// By considering the terms in the Fibonacci sequence whose values
// do not exceed four million, find the sum of the even-valued terms.

int computeFibonacciEntry(int entry){
	if (entry < 2) return 1;
	return computeFibonacciEntry(entry - 1)
		+ computeFibonacciEntry(entry - 2);
}


int main(){
	int sum = 0;
	int bound = 4000000; //4 million bois
	int i = 0;
	int fib = 0;
	while (fib < bound){
		fib = computeFibonacciEntry(i);
		if (fib < bound && fib % 2 == 0)
			sum += fib;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}
