#include<stdio.h>

main(){
	
	int i,j;
	int k=5;
	
	for(i=5;i>=1;i--){
		for(k=4;k>=i;k--){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
