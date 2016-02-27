#include <stdio.h>

void InsertionSort(int a[],int a_len){
	int i,j;
	int tmp;
	for(i=1;i<a_len;i++){
		tmp = a[i];
		for(j = i;j>0&&a[j-1]>tmp;j--)
			a[j] = a[j-1];
		a[j] = tmp;
	}
}
int main(){
	int a[6] = {34,8,64,51,32,21};
	InsertionSort(a,6);
	for(int i=0;i<6;i++){
		printf(" %d ",a[i]);
	}
}