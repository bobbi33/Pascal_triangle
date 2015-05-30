#include "stdio.h"

#define Height 3

int calcu(int m, int k){
	int rcn = 1;
	int i;

	for(i= 1; i <= k; i++){
		rcn = rcn * ( m - i + 1) / i;
	}
	return rcn;
}

int main(){
	int r, n;
	int rcn= 0;


	for(r = 0; r < Height + 1; r++){
		for(n = 0; n < 2 * Height + 1; n++){

			if((n < Height - r)||(n > Height + r)){
				printf("* ");
			}else{
				if( (r + n) % 2 == 1 ){
					printf("%d ",calcu(r,n));
				}else{
						printf("* ");
				}
			}	
//			rcn = calcu(r,n);
//			printf("r is %d, n is %d, rcn is %d\n",r,n,rcn);
		}
		printf("\n");	
	}

	getchar();
	getchar();
	return 0;
}
