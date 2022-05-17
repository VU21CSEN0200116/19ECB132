#include<stdio.h>
#include<stdlib.h>
struct arr{
	int usedsize;
	int totalsize;
	int *ptr;
};
void createarray(struct arr *a, int usize, int tsize){
	(*a).totalsize=tsize;
	(*a).usedsize=usize;
	(*a).ptr= (int *)malloc(tsize*(sizeof(int)));
}
void setval(struct arr *a){
	int i,n;
	printf("enter your elements \n");
	for(i=0;i<(*a).usedsize;i++){
		scanf("%d",&n);
		(*a).ptr[i]=n;	
		}
}
void show(struct arr *a){
	int i,n;
	printf("the elements are \n");
	for(i=0;i<(*a).usedsize;i++){
		printf("%d \n",(*a).ptr[i]);
	}
}
int main(){
	struct arr marks;
	createarray(&marks,3,10);
	setval(&marks);
	show(&marks);
	return 0;
}
