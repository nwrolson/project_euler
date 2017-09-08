#include <stdio.h>
#include <math.h>

// What is the largest prime factor of the number below?

const long target = 600851475143;
long factor;
long root;
int flag;


int main() {
	int i;
	flag = 0;
	if (target % 2 == 0) factor = target-1;
	else factor = target-2;
	while ( (factor > 0) && (!flag)){
		printf("%ld\n", factor);
		if ((target % factor) == 0){
			printf("factor\n");
			root = sqrt(factor);
			printf("root: %ld\n", root);	
			/*if ((root % 2) != 0){
				flag = 1;
				for (i = 3; i < root; i += 2){
			        	if (factor % i == 0) flag = 0;
				}		    
			}*/
			flag = 1;
			for (i = 3; i < root+2; i += 2){
				if (factor % i == 0) flag = 0;
			}
		}
		if (!flag) factor -= 2;
		if (factor < 1) flag = -1;
	}
	if (flag == -1) printf("No prime found");
	else printf("Largest prime: %ld\n", factor);
	return 0;
}
