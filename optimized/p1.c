#include <stdio.h>

#define N 1000

int computeSum(int bound, int k){
//computes sum of multiples of k less than bound
	int num_terms = (bound - 1) / k;
	return num_terms * k * (num_terms + 1) / 2;
}

int main() {
	//using inclusion-exclusion principle to 
	int result = computeSum(N, 3) + computeSum(N, 5) - computeSum(N,15);
	printf("Bound: %d Sum: %d \n", N, result);
	return 0;

}
