#include<stdio.h>
#include<stdlib.h>
void inputarr(int arr[],int n);
int del(int arr[],int n);
int main()
{
	int n,i;
	int *arr = (int*)malloc(n*sizeof(int));
	inputarr(arr,n);
	del(arr,n);
	return 0;
}
void inputarr(int arr[],int n){
	int i;
	printf("enter the elements \n");
	for(i=0;i<n;i++){
		printf("enter element %d :",i+1);
		scanf("%d",&arr[i]);
	}
	printf("The array is : ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int del(int arr[],int n){
	int m,i;
	printf("enter the position you want to delete \n");
	scanf("%d",&m);
	for(i=0;i<m-1;i++){
	    pritnf("%d ",arr[i]);
	}
}

