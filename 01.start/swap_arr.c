#include <stdio.h>

void swap_arr(int arr[], int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int main() {
	int arr[5] = {1,2,3,4,5};
	swap_arr(arr, 0, 4);
	printf("arr : {%d, %d, %d, %d, %d}\n" , arr[0], arr[1], arr[2], arr[3], arr[4]);
	return 0;
}