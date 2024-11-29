#include<stdio.h>
int main(){
	int luachon;
	do{
		int n;
		int array[10];
		int index,value;
		int min,max;
		int tong = 0;
		int xetSonguyento = 0;
		int random,thongke = 0;
		printf("Nhap vao lua chon cua ban(1-8): ");
		scanf("%d",&luachon);
		switch(luachon){
			case 1:
				printf("Nhap so phan tu ban muon: "); 
				scanf("%d",&n);
				array[n];
				for(int i = 0;i<n;i++){
					printf("Nhap vao phan tu: ");
					scanf("%d",&array[i]);
				}
				break;
			case 2:
				printf("Nhung phan tu co trong mang la: ");
				for(int i=0;i < n;i++){
					printf("%d\n",array[i]);
				}
				break;
			case 3:
				printf("Cac phan tu la chan trong mang: \n");
				for(int i=0;i<n;i++){
					if(array[i] % 2 == 0){
						printf("%d\n",array[i]);
						tong += array[i];
					}
				}
				printf("Tong cac so chan la: %d\n",tong);
	            break;
			case 4:
				max = 0;
				min = n;
				
	            for(int i =0;i<n;i++){
	            	if(max < array[i]){
	            		max = array[i];
					}
					if(min > array[i]){
						min = array[i];
					}
				}
				printf("Max va min trong mang: %d va %d\n",max,min);
	            break;
			case 5:
                printf("Cac phan tu chi gom so nguyen to: \n");
                tong = 0;
                for(int i = 0;i <n;i++){
                    if (array[i] <= 1){
        	            xetSonguyento = 0;
                    } else if (array[i] == 2){
        	            xetSonguyento = 1;
        	            printf("%d\n",array[i]);
        	            tong += array[i];
                    } else {
                    for (int a = 2; a * a <= array[i]; a++){
                        if (array[i] % a == 0){
            	            xetSonguyento = 0;
                            continue;
                        }
                        xetSonguyento = 1;
                    }
                    if(xetSonguyento){
        	        printf("%d\n",array[i]);
        	        tong += array[i];
		            }     
                    }
                }
	            break;
			case 6:
				printf("Nhap vao 1 so bat ky: "); 
				scanf("%d",&random);
				for(int i = 0;i<n;i++){
					if(random == array[i]){
						thongke++;
					}
				}
				printf("Trong mang co %d trung voi so ban nhap",thongke);
				break;
			case 7:
				printf("Nhap vi tri:");
	            scanf("%d",&index);
	            printf("Nhap gia tri:");
	            scanf("%d",&value);
	            for(int i = 10;i>index;i--){
		            array[i]=array[i-1];
	            }
	            array[index]=value;
			case 8:
				break;
	    }
    }while(luachon<8); 
}
