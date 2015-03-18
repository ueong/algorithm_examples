#include <stdio.h>
int max(int x, int y) {
	return x > y ? x : y;
}

int max_arr_recur(int arr[], size_t arr_len) {
	if(arr_len == 1) {
		printf("arr_len == 1\n");
		return arr[0];
	} 
	printf("arr_len == %d\n", arr_len);
	return max(arr[arr_len - 1], max_arr_recur(arr, arr_len - 1));
}


int main() {
	int arr[5] = {7,3,5,9,11};
	printf("max_arr_recur(arr, 5) : %d\n", max_arr_recur(arr, 5));
	return 0;
}
