#include<stdio.h>
int SOE(int a[],int);
void main(){
	int a[]={10,20,30,40,50},b[]={1,2,3},sum;
	sum=SOE(a,5);
	printf("sum of element of array a : %d\n",sum);
	sum=SOE(b,3);
	printf("sum of element of array b : %d ",sum);
	
}
int SOE(int a[],int size){
	int sum=0,i;
	for(i=0;i<size;i++){
		sum=sum+a[i];
	}
	return sum;
}

