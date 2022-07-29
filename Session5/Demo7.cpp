#include <stdio.h>
int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			printf("* ");
		}
		printf("\n");
	}
	// 
	printf("\n---------\n");
	for(int i=0;i<5;i++){
		int sl = 4;
		if(i%2==1){
		  sl = 5;
		}
		for(int j=0;j<sl;j++){
			printf("* ");
		}
		
		printf("\n");
	}
}
