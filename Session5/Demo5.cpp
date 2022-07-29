#include <stdio.h>
int main(){
	printf("Line 1\n");
	printf("Line 2\n");
	int x = 10;
	if(x>=10){
		goto xyz;
	}
	printf("Line 3\n");
	xyz: printf("Line 4\n");
	printf("Line 5\n");
	
	
}
