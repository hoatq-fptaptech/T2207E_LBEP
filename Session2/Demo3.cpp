#include <stdio.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("Nhap b=");
	scanf("%d",&b);
	
	if(a>b){
		// yes
		printf("Max: %d",a);
	}else{
		// no
		if(a<b){
			// yes
			printf("Max: %d",b);
		}else{
			// no
			printf("Hai so bang nhau");
		}
	}
	
	
}
