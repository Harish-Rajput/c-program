#include<stdio.h>
int a,b,c;
void add();
void main(){
	printf("enter two no for addition :");
	scanf("%d%d",&a,&b);
	add();
	printf("sum : %d",c);
}
void add(){
	c=a+b;
}
