#include <stdio.h>
#include <math.h>


#define MAX 10001

int checkPrime(int num){
	int root = sqrt(num);
	int i;
	if ((num % 2) == 0) return 0;
	for (i = 3; i < root+2; i += 2){
		if ((num % i) == 0) return 0;		
	}
	return 1;
}

int main(){
	int i = 0;
	int count = 0;
	while (count < MAX){
		if (checkPrime(i)) count++;
		if (count < MAX) i++;
	}
	printf("%dst prime: %d\n", MAX, i);
	return 0;	
}
