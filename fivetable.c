#include<stdio.h>
int fivetable(int a,int i){
    if(i==0)
    return 0;
    printf("%d * %d = %d\n",a,11-i,a*(11-i));
    fivetable(a,--i);
}
int main()
{
    int a,size;
    a=5;
    size=10;
    fivetable(a,size);
    return 0;
}
 
