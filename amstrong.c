#include<stdio.h>
int length(int l);
int power(int rem,int count);
int amstrong(int n);
int inputnumber();
void printamstrongornot(int a);
int main()
{
	int n,p;
	n=inputnumber();
	p=amstrong(n);
	printamstrongornot(p);
	return 0;
}
int length(int n){

	int count=0;
	while(n!=0){
		n=n/10;
		count++;
	}
//	printf("length is %d\n",count);
	return count;
}	
int power(int rem,int count){
	if(count==0){  
		return 1;
	}
	else{
		rem=rem*power(rem,count-1); 
		return rem;
	}
}
int inputnumber(){
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	return n;
}
int amstrong(int n){
	int temp,len,p=0,rem; 
	temp=n;//
	len=length(n);
	while(n>=1){
		rem=n%10;
//		printf("rem=%d\n",rem);
		n/=10;
//		printf("n=%d\n",n);
		p+=power(rem,len);
//		printf("p=%d\n",p);
	
	}
//	printf("%d",p);
	if(p==temp){
		return 1;
	}
	else{
		return 0;
	}
}
void printamstrongornot(int a){
//	printf("%d",a);
	if(a==0)
	printf("not amstrong");
	else
	printf("amstrong");
}
/*
output
Enter the number :371
amstrong
*/