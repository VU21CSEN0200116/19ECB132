#include<stdio.h>
#include<stdlib.h>
void inputarr(int arr[],int n);
void checkdup(int arr[],int n);
void printarr(int arr[],int n);
int main(){
	int i,n;
	printf("enter the size \n");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	inputarr(arr,n);
	printarr(arr,n);
	checkdup(arr,n);
	return 0;
}
void inputarr(int arr[],int n){
	int i;
	printf("enter the elements \n");
	for(i=0;i<n;i++){
		printf("enter element %d :",i+1);
		scanf("%d",&arr[i]);
	}
}
void checkdup(int arr[],int n){
	int i,g,count=0;
	g=(arr[0]==arr[1])?(arr[1]):(arr[0]);
	for(i=2;i<n;i++){
		if(g!=arr[i]){
			printf("%d ",arr[i]);
		}
		g=arr[i];
		count+=count;
	}
}
void printarr(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
/*
output
enter the size 
5
enter the elements 
enter element 1 :1
enter element 2 :2
enter element 3 :3
enter element 4 :4
enter element 5 :5
1 2 3 4 5
  */