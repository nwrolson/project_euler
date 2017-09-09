#include <stdio.h>
#include <math.h>

// What is the largest prime factor of the number below?

const long target = 600851475143;
//const long target = 13195;
long factor;
long root;
int flag;


int main() {
/*	int i;
	flag = 0;
	if ((target % 2) == 0) factor = (target/2)-1;
	else {
		factor = (target/2);
		if ((factor % 2) == 0) factor--;
		}
	while ( (factor > 0) && (!flag)){
		printf("%ld\n", factor);
		if ((target % factor) == 0){
			printf("factor\n");
			root = sqrt(factor);
			printf("root: %ld\n", root);	
			flag = 1;
			for (i = 3; i < root+2; i += 2){
				if (factor % i == 0) flag = 0;
			}
		}
		if (!flag) factor -= 2;
		if (factor < 1) flag = -1;
	}
*/
	int i = 2;
	int j = 3;
	flag = 0;
	factor = 7; //arbitrary
	while ((factor > 2) && !flag){
		printf("%d\n", i);
		if ((target % i) == 0){
			factor = target / i;
			printf("factor: %ld\n", factor);
			root = sqrt(factor);
			flag = 1;
			for (j = 3; j < root+2; j += 2){
				if (factor % j == 0){
			       		flag = 0;
				}
			}		
		}
		i++;
	}
	if (flag == -1) printf("No prime found");
	else printf("Largest prime: %ld\n", factor);
	return 0;
}
