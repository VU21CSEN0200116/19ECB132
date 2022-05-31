#include<stdio.h>
void inputarr(int arr[10][10],int n,int m);
void transpose(int arr[10][10],int n,int m);
void printarr(int arr[10][10],int n,int m);
int main()
{
	int arr[10][10];
	int n,m;
	printf("enter the rows and coloumns \n");
	scanf("%d %d",&m,&n);
	inputarr(arr,n,m);
	printarr(arr,n,m);
	transpose(arr,n,m);
	printarr(arr,m,n);
	return 0;
}
void inputarr(int arr[10][10],int n,int m){
	int i,j;
	printf("enter your elements \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}	
}
void transpose(int arr[10][10],int n,int m){
	int i,j,c;
	for(i=0;i<m;i++){
		for(j=i;j<n;j++){
			c=arr[i][j];
		    arr[i][j]=arr[j][i];
		    arr[j][i]=c;
		}
	}
}
void printarr(int arr[10][10],int n,int m){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
  
