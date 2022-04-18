#include<stdio.h>
#include<stdlib.h>
void inputarr(int arr[], int n);
int *prev(int arr[],int n);
int main(){
	int n,i;
	int *ptr;
	printf("enter the size \n");
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	inputarr(arr,n);
	ptr=prev(arr,n);
	printarray(ptr,n+1);
	return 0;
}
void inputarr(int arr[], int n){
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
int *prev(int arr[],int n){
	int i,m;
	int a;
	int *ptr=(int *)malloc((n+1)*sizeof(int));
	printf("enter the position where u want to insert \n");
	scanf("%d",&m);
	printf("Enter the input :");
	scanf("%d",&a);
	for(i=0;i<m-1;i++){//for loop terminates when?when i=m-1 and what is m-1 =4
		//printf("%d ",arr[i]);
		ptr[i]=arr[i];
	}
	ptr[i]=a;
	for(i=m;i<n+1;i++){
		ptr[i]=arr[i-1];
	}
	//position=5
	//indextarget=4
	return ptr;
}
void printarray(int arr[],int n){
	int i;
	printf("The elements of the array are :\n");
	for(i=0;i<n;i++){
	
		printf("%d\t",arr[i]);
	}
}

