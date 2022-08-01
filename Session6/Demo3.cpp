#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
    scanf("%d",&n);
    
	int ary[n];
    int  high;
    
    printf("Nhap 10 so nguyen:\n");
    for(int i=0; i<n; i++)
    {
	 scanf("%d",&ary[i]);
    }
    /* Displays highest of the entered values */
    high = ary[0];
    for(int i=1; i<n; i++)
    {
        if(ary[i] > high)
            high = ary[i];
    }
    printf("\nHighest value entered was %d", high);
    
    int pHigh = high;// tim 1 gia tri thuoc tap hop nhung khong phai high
    for(int i=0;i<n;i++){
    	if(ary[i]< high){
    		pHigh = ary[i];
    		break;
		}
	}
    
    // 2 tinh huong: tim duoc hoac ko
    if(pHigh == high){
    	printf("Mang khong co gia tri gan lon nhat\n");
	}else{
		for(int i=0;i<n;i++){
	    	if(ary[i]> pHigh && ary[i]<high){
	    		pHigh = ary[i];
			}
		}
		printf("\nPre Highest value entered was %d", pHigh);
	}
    
}
