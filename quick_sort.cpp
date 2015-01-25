#include <iostream>

using namespace std;

 void swap(int *a, int *b){
 	int temp = *a;
 	*a = *b;
 	*b = temp;
 }

int onece_sort(int array[], int low, int high){
	int mid = low;
	while(low < high){
		while(low < high && array[mid] <= array[high]){
			high--;
		}
		if(low < high && array[mid] > array[high]){
			swap( &array[mid], &array[high]);
			mid = high;
			//low++;
		}
		while(low < high && array[mid] >= array[low]){
			low++;
		}
		if(low < high && array[mid] < array[low]){
			swap(&array[mid], &array[low]);
			mid = low;
			//high++;
		}
	}
	return mid;
}

void quictsort(int array[], int low, int high){
	if(low < high){
		int middle = onece_sort(array, low ,high);
		quictsort(array, low , middle-1);
		quictsort(array, middle+1 , high);
	}
}

int main(){
	int num[7] ={4,11,19,5,2,8,1};
	quictsort(num,0,6);
	for (int i = 0; i <= 8; ++i){
		cout << num[i] <<endl;
	}
	return 0;
}