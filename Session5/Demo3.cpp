#include <stdio.h>
int main(){
	int c = 0;
	while(c<10){
		printf("Scooby\n");
		c++;
	}
	// c = 10
	c = 0;
	while(c<10){
		printf("Hello world!\n");
		c++;
	}
	
	for(int i=0;i<10;i++){
		printf("Scooby\n");
	}
	
	for(int i=0;i<10;i++){
		printf("Hello world!\n");
	}
	// i not declared
//	printf("i = %d",i);
	int t = 10;
	do{
		printf("Do...While\n");
	}while(t>10);
	
	// viet chuong trinh yeu cau nguoi dung nhap vao 1 so nguyen duong
	int n;
	do{
		printf("Nhap 1 so nguyen duong n =");
		scanf("%d",&n);
	}while(n<=0);
	
	int a,b,c;
	do{
		// nhap 3 canh
	}while(!(a+b>c&&a+c>b&&b+c>a));
	
	int tk = 4000;
	int y;
	int k;
	for(y=0;tk<1000000;y++){
		tk += tk*8/100;
	}
	
}
