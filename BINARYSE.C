#include<stdio.h>

int main(){
	int a[10],i,mid,low,high,keyvalue;

	for(i=0;i<10;i++){
		printf("\nenter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nenter keyvalue: ");
	scanf("%d",&keyvalue);
	low=0,high=9,mid=(low+high)/2;

	while(low<=high){
		if(keyvalue == a[mid]){
			printf("%d at %d",keyvalue,mid);
			break;
		}
		if(keyvalue < a[mid]){
			low=mid+1;
		}
			if(keyvalue > a[mid]){
		high=mid-1;
		}
	}
	if(low>=high){
		printf("\nyour value not in array");
	}

	return 0;
}

