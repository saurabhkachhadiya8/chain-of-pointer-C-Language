#include<stdio.h>
main(){
	
	int a,i;

	printf("Enter array size : ");
	scanf("%d",&a);

	printf("\n");
	
	int arr[a];
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
