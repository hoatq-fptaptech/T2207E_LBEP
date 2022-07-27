#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nam muon gui:");
	scanf("%d",&n);
	
	int tk = 4000;
	int y = 0;
	while(y<n){
		// yes
		int l = tk*8/100;
		tk += l;
		y++;
	}
	// no
	printf("So tien thu duoc: %d",tk);
}
