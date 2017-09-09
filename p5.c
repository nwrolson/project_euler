#include <stdio.h>

#define MAX 20

int loop(){
	int i;
	int flag;
	int num = MAX;
	while (!flag){
		flag = 1;
		for (i = 1; i < MAX+1; i++){
			if ((num % i) != 0) flag = 0; 
		}	
		if (!flag) num++;
	}
	return num;
}

int main(){
	int result = loop();
	printf("%d\n", result);
	return 0;	
}
