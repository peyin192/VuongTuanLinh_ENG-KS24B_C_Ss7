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
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("\nPhan tu trong hang thu %d, cot thu %d la %d ",i+1,j+1,arr[i][j]);
			
			
		}
	}
	return 0;
}
