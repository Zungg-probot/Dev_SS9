#include<stdio.h>
int main(){
	int a,b,n = 0;
	int array[1][1];
	int tong;
	int tich;
	int tonglonnhat = 0;
	int count;
	do{
		printf("Nhap lua chon cua ban: ");
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("Nhap so hang trong mang: ");
				scanf("%d",&a);
				printf("Nhap so cot trong mang: ");
				scanf("%d",&b);
				array[a][b];
				printf("Nhap cac phan tu: ");
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						scanf("%d",&array[i][j]);
					}
				}
				break;
			case 2:
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						printf("%d ",array[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						if(array[i][j] % 2 == 0){
							continue;
						}
						tong += array[i][j];
					}
				}
				printf("Tong cac gia tri le la: %d",tong);
				break;
			case 4:
				tich =1;
				for(int i=0;i < b;i++){
		            tich *= array[0][i];
	            }
	            for(int i=0;i < b;i++){
		            tich *= array[a-1][i];
	            }
                for(int i = 0;i < a;i++){
		            tich *= array[i][0];
	            }
	            for(int i = 0;i < a;i++){
		            tich *= array[i][b-1];
	            }
	            tich /= array[0][0];
	            tich /= array[a-1][b-1];
	            tich /= array[a-1][0];
	            tich /= array[0][b-1];
	            printf("tich cac phan tu tren bien la: %d",tich);
	            break;
			case 5:
				if(a != b){
					printf("Ma tran khong hop le!");
					break;
				}
				printf("Cac phan tu tren duong cheo chinh cua ma tran la: \n");
	            for(int i = 0;i<a;i++){
		        printf("%d\n",array[i][i]);
	            }
	            break;
			case 6:
				if(a != b){
					printf("Ma tran khong hop le!");
					break;
				}
				printf("Cac phan tu tren duong cheo phu cua ma tran la: \n");
	            for(int i = 0;i<a;i++){
		        printf("%d\n",array[i][a-1-i]);
	            }
	            break;
			case 7:
				for(int i=0;i<a;i++){
					tong = 0;
					for(int j=0;j<b;j++){
						tong += array[i][j];
						if(tonglonnhat < tong){
							tonglonnhat = tong;
							count = i+1;
						}
					}
				}
				printf("Dong co tong lon nhat la: %d",count);
				break;
			case 8:
				break;
		}
	}while(n<8);
}
