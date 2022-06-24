#include<stdio.h>
int armstrong(int);
void main(){
	int n,f;
	printf("enter a natural no. to check armstrong or not:\n");
	scanf("%d",&n);
	f=armstrong(n);
	
    if(f){
		printf("%d is  a Armstrong no",n);
    }
	else{
		printf("%d is not a Armstrong no",n);
	}	
}
int armstrong(int n){
	int  r,sum=0,temp;
	temp=n;
	while(temp){
		r=temp%10;
		sum=sum+r*r*r;
		temp=temp/10;
	}
	
	return (sum==n);
}

