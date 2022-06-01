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
/*
output
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
  */
 
