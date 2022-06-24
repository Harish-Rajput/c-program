#include<stdio.h>
int palindrome(int);
void main(){
	int n,f;
	printf("enter a natural no. to check palindrome or not:\n");
	scanf("%d",&n);
	f=palindrome(n);
	
    if(f==1){
		printf("%d is  a palindrome no",n);
    }
	else{
		printf("%d is not a palindrome no",n);
	}	
}
int palindrome(int n){
	int  rev=0,temp;
	temp=n;
	while(temp){
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	return (rev==n);
}

