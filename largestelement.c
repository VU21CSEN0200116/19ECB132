#include<stdio.h>
#include<stdlib.h>
void inputarr(int arr[],int n);
void check(int arr[],int n);
int main()
{
	int n,i;
	printf("enter the size \n");
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	printf("Enter the input\n");
	inputarr(arr,n);
	check(arr,n);
	return 0;
}
void inputarr(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void check(int arr[],int n){
	int i,g;
	g=(arr[0]<arr[1])?(arr[1]):(arr[0]);
	for(i=2;i<n-1;i++){
		if(g<arr[i]){
			g=arr[i];
		}
		
		
		
		printf("g is %d for step %d\n",g,i+1);
	}
	printf("the greatest number is %d",g);
}