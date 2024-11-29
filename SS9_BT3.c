#include<stdio.h>
#include<stdlib.h>
int main(){
	int array[100]={1,2,3,4,5,6,7,8};
	int index;
	int n = sizeof(array)/sizeof(array[0]);
	printf("Nhap vi tri muon xoa: ");
	scanf("%d",&index);
	for(int i = index;i<8;i++){
		array[i]=array[i+1];
	}
	for(int i = 0;i<n;i++){
		printf("%d ",array[i]);
		if((i+1 > index) && array[i]==0){
			break;
		}
	}
}
