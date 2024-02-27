#include<stdio.h>
void xyz(a){
	int arr[a],i;
	for(i=0;i<a;i++){
		printf("array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<a/2;i++){
		int temp = arr[i];
		arr[i] = arr[a-1-i];
		arr[a-1-i] = temp;
	}
	
	printf("\n");
	for(i=0;i<a;i++){
		printf("%d  ",arr[i]);
	}
}

void main(){
	
	int b;
	
	printf("Enter array size : ");
	scanf("%d",&b);
	printf("\n");

	xyz(b);
	
}
