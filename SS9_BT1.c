#include<stdio.h>
#include<stdlib.h>
int main(){
	int array[100]={1,2,3,4,5};
	int index,value;
	int n = sizeof(array)/sizeof(array[0]);
	printf("Nhap vi tri:");
	scanf("%d",&index);
	printf("Nhap gia tri:");
	scanf("%d",&value);
	for(int i = n;i>index;i--){
		array[i]=array[i-1];
	}
	array[index]=value;
	for(int i = 0;i<n;i++){
		printf("%d ",array[i]);
		if((i > index) && array[i]==0){
			break;
		}
	}
}
