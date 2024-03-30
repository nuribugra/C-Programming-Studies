#include<stdio.h>
#define m 2
#define n 3
int main(){
	int i,j,r,A[m][n],S[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("A[%d][%d]",i+1,j+1);
			scanf("%d",&A[i][j]);
			
		}
	}
	printf("skalar degeri r:");
	scanf("%d",&r);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			S[i][j]=r*A[i][j];
			
		}
	}
	printf("S matrisi\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%4d",S[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
