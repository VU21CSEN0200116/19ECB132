#include<stdio.h>
int main()
{
	int n,rem,rev=0,num;
	printf("Enter your number \n");
	scanf("%d",&n);
	num=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("The reversed number is %d \n",rev);
	if(num==rev){
		printf("The number is a pallindrome");
	}
	else{
		printf("The number is not a pallindrome");
	}
	return 0;
}
 
