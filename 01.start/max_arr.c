#include <stdio.h>

int max_arr(int arr[], size_t arr_len) {
	int maxa, i;
	maxa = arr[0];

	for(i = 1; i < arr_len; i++) {
		if(arr[i] > maxa) {
			maxa = arr[i];
		}
	}
	return maxa;
}

int main() {
	int arr[5] = {7,3,5,9,11};

	printf("max_arr(arr, 5) : %d\n", max_arr(arr, 5));

	return 0;
}
