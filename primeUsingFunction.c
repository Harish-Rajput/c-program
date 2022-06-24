#include<stdio.h>

int prime(int);
void main(){
	int n,f;
	printf("enter a natural no. to check prime or not:\n");
	scanf("%d",&n);
	if(n==1){
			printf("%d is not a prime no",n);
	}
	else{
		f=prime(n);
	if(f==1){
		printf("%d is not a prime no",n);
	}
	else{
		printf("%d is a prime no",n);
	}
	}
}
int prime(int n){
	int i;
	for(i=2;i<=(n/2);i++){
		if(n%i==0){
			return 1;
		}
	}
	return 0;
}
