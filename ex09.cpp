#include <stdio.h>
int main(){
	int m,n;
	printf("Hay nhap so hang va cot\n");
	
	printf("So hang: ");
	scanf("%d",&m);
	
	printf("So cot: ");
	scanf("%d",&n);
	
	int arr[m][n];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap phan tu trong hang thu %d, cot thu %d: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
			
		}
	}
	
	for(int i=0;i<n;i++){
		printf("\nHang tren cung %d",arr[0][i]);
	}
	for(int i=0;i<m;i++){
		printf("Bien duoi cung %d",arr[m-1][i]);
	}
	

	return 1;
}
