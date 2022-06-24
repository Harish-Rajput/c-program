#include<stdio.h>
int SOE(int a[],int);
int min(int a[],int);
int max(int a[],int);
int search(int a[],int,int);
int sort(int a[],int);
void swap(int *p,int *q);
void print(int a[],int size);

void main(){
	int a[]={10,20,30,40,50},b[]={1,2,3},c[]={101,22,33,4,55,65},sum,mi,ma;
	int f;
	sum=SOE(a,5);
	printf("sum of element of array a : %d\n",sum);
	sum=SOE(b,3);
	printf("sum of element of array b : %d\n",sum);
	
	
	 mi = min(a,5);
	printf("minimum element of array a : %d\n",mi);
	 mi=min(b,3);
	printf("minimum element of array b : %d\n",mi);
	
	//maximum
	 ma=max(a,5);
	printf("maximum element of array a : %d\n",ma);
	 ma=max(b,3);
	printf("maximum element of array b : %d\n",ma);
	
	printf("befor sorting array c is :\n");
	print(c,6);
	sort(c,6);
	printf("\nAfter sorting array c is :\n");
	print(c,6);
	
	//searching
	f=search(c,6,55);
	if(f==1){
		printf("\nelement found");
	}
	else{
		printf("\nelement not found");
	}
	
	
}
int SOE(int a[],int size){
	int sum=0,i;
	for(i=0;i<size;i++){
		sum=sum+a[i];
	}
	return sum;
}
int max(int a[],int size){
	int max,i;
	max=a[0];
	for(i=1;i<size;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int min(int a[],int size){
	int min,i;
	min=a[0];
	for(i=1;i<size;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}
int search(int a[],int size,int n){
	int i;
	for(i=0;i<size;i++){
		if(a[i]==n){
			return 1;
		}
	}
	return 0;
}
void swap(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int sort(int a[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=(i+1);j<size;j++){
			if(a[i]>a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
}
void print(int a[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}

