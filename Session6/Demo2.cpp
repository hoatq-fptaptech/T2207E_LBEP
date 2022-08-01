#include <stdio.h>
int main(){
	int arr[11];
	int x;
	for(int i=0;i<11;i++){ // duyet mang
		//arr[i] = i*i+i-1+i/2;
		// arr[0] = 0*0+0-1+0/2
		// arr[1] = 1*1+1-1+1/2;
		// ...
		// arr[10] = 10*10+10-1+10/2
		
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<11;i++){
		printf("%d\t",arr[i]);
	}
	
}
