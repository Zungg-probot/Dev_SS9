#include<stdio.h>
int main(){
	int luachon;
	do{
		int array[10];
		int index,value;
		printf("Nhap vao lua chon cua ban(1-6): ");
		scanf("%d",&luachon);
		switch(luachon){
			case 1:
				for(int i = 0;i<10;i++){
					printf("Nhap vao phan tu: ");
					scanf("%d",&array[i]);
				}
				break;
			case 2:
				printf("Nhung phan tu co trong mang la: ");
				for(int i=0;i<10;i++){
					printf("%d\n",array[i]);
				}
				break;
			case 3:
				printf("Nhap vi tri:");
	            scanf("%d",&index);
	            printf("Nhap gia tri:");
	            scanf("%d",&value);
	            for(int i = 10;i>index;i--){
		            array[i]=array[i-1];
	            }
	            array[index]=value;
	            break;
			case 4:
	            printf("Nhap vao vi tri: ");
                scanf("%d",&index);
	            printf("Nhap vao gia tri: ");
	            scanf("%d",&value);
	            array[index]=value;
	            break;
			case 5:
				printf("Nhap vi tri muon xoa: ");
	            scanf("%d",&index);
	            for(int i = index;i<10;i++){
		        array[i]=array[i+1];
	            }
	            break;
			case 6:
				break;
	    }
    }while(luachon<6); 
}
