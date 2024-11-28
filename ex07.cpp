#include <stdio.h>
int main(){
	int n;
    printf("Nhap phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
    
        while(1){
            printf("Nhap phan tu thu %d cua mang: ",i+1);
            scanf("%d", &arr[i]);
                if(arr[i]%2!=0){
                    break;
                }
		else{
			printf("Nhap lai: );
        }
        
    }
    return 0;
}
