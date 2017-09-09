#include <stdio.h>

#define MAX 100

int main(){
	int i;
	int sum1 = 0;
	int sum2 = 0;
	for (i = 1; i < MAX+1; i++){
		sum1 += i*i;
		sum2 += i;
	}
	sum2 *= sum2;
	printf("Difference: %d\n", sum2-sum1);
	return 0;
}
