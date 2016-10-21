#include <stdio.h>


int main() {
	int sum = 0;
	int bound = 1000;
	int i;
	for (i = 0; i < bound; i++){
		if ((i % 3 == 0) || (i % 5 == 0)){
			sum += i;
		}
	}
	printf("Bound: %d Sum: %d\n", bound, sum);
}