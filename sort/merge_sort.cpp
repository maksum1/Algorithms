#include<stdio.h>
const int len = 8;

// 合并有序数列 
void merge_sort_array(int arr[],int reg[],int start,int mid,int end){
	int i = start;
	int j = mid + 1;
	int k = 0;
	while(i<=mid&&j<=end){
		if(arr[j]<=arr[i])
			reg[k++] = arr[j++];
		else
			reg[k++] = arr[i++];
	}
	
	while(i<=mid){
		reg[k++] = arr[i++];
	}
	
	while(j<=end){
		reg[k++] = arr[j++];
	}
	for(i=0;i<k;i++){
		arr[start+i] = reg[i];
	}
}

void merge_sort_recursive(int arr[],int reg[],int start,int end){
	if(start>=end) 
		return;
	int mid = (start+end)/2;
	merge_sort_recursive(arr,reg,start,mid);
	merge_sort_recursive(arr,reg,mid+1,end);
	merge_sort_array(arr,reg,start,mid,end);	 
}

void merge_sort(int arr[]){
	int reg[len];
	merge_sort_recursive(arr,reg,0,len-1);
}

int main(){
	int a[len] = {6,5,3,1,8,7,2,4};
	merge_sort(a);
	for(int i=0;i<len;i++){
		printf("%d",a[i]);
	}
}
