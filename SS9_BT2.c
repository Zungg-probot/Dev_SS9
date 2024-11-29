#include<stdio.h>
int main(){
	int array[100]={1,2,3,4,5,6,7,8,9};
	int index,value;
	printf("Nhap vao vi tri: ");
	scanf("%d",&index);
	printf("Nhap vao gia tri: ");
	scanf("%d",&value);
	array[index]=value;
	for(int i=0;i<100;i++){
		printf("%d ",array[i]);
	}
}
