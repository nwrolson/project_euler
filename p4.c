#include <stdio.h>

#define NUM 4

int powerTen(int y){
	int result = 1;
	while (y--){
		result *= 10;
	}
	return result;	
}

int checkPalindrome(int val){
	int digit_index = 0;
	int digit_array[NUM*2];
	int working = val;
	while (working > 0){
		digit_array[digit_index] = working % 10;
		working /= 10;
		digit_index++;
	}
	int i;
	int flag = 1;
	//printf("digit_index: %d\n", digit_index);
	for (i = 0; i < digit_index; i++){
		if (digit_array[i] != digit_array[digit_index-i-1]){
			flag = 0;
			//printf("index 1: %d\n", digit_array[i]);
			//printf("index 2: %d\n", digit_array[digit_index-i-1]);
		}
	//	printf("%d\n", digit_array[i]);
	}	
	return flag;
}

int loop(){
	int i;
	int j;
	int val;
	int result = 0;
	int upper = powerTen(NUM)-1;
	int lower = powerTen(NUM-1)-1;
//	printf("upper: %d\n", upper);
//	printf("lower: %d\n", lower);
	for (i = upper; i > lower; i--){
		for (j = upper; j > lower; j--){
			val = i*j;
			if (checkPalindrome(val)){
			//	printf("i: %d j: %d\n", i, j);       
				if (val > result) result = val;		
			}
		}
	}
	return result;
}

int main() {
	int result;
	result = loop();
	printf("%d\n", result);
//	printf("%d\n", checkPalindrome(90009));
	return 0;
}
