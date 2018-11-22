#include <stdio.h>

void heapify(int * arr, int n){
	for (int j=n/2; j>0; j--){
		int l = 2*j-1; //left child
		if((l<n) && (arr[l]<arr[j-1])){ //checking left child
			int f = arr[l];
			arr[l] = arr[j-1];
			arr[j-1] = f;
    }
		if((l+1<n) && (arr[l+1]<arr[j-1])){ //checking right child
			int f = arr[l+1];
			arr[l+1] = arr[j-1];
			arr[j-1] = f;
		}
	}
}

void heapSort(int * arr, int k){
	for(int n=k; n>0; n--){
		heapify(arr,n);
		int f = arr[0];
		arr[0] = arr[n-1];
		arr[n-1] = f;
	}
}

int main(void) {
	int a[1000];
	int k;
	scanf("%d", &k);
	for(int i=0; i<k; i++){
		scanf("%d", &a[i]);
	}
	heapSort(a, k);
	for(int i = 0; i<k-1; i++){
		printf("%d ", a[i]);
	}
	printf("%d", a[k-1]);
}
