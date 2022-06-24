#include<stdio.h>
void bin(int);
void main(){
	int n;
	printf("enter a no to calculate binary :");
	scanf("%d",&n);
	bin(n);
}
void bin(int n)
{ int r;
   if(n!=0){
   r=n%2;
	 bin(n/2);
	 printf("%d",r);
   }
	
}
