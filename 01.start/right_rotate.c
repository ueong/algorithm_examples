#include <stdio.h>

void right_rotate(int arr[], int start, int end) {
	int last, i;
	last = arr[end];
	for(i = end; i > start; i--) {
		arr[i] = arr[i-1];
	}
	arr[start] = last;
}

void left_rotate(int arr[], int start, int end) {
	int first, i;
	first = arr[start];
	for(i = start; i < end; i++) {
		arr[i] = arr[i+1];
	}
	arr[end] = first;
}

void right_rotate_n(int arr[], int start, int end, int n) {
	int i;
	int arr_temp[n];
	
	// 마지막 n개를 별도 배열에 복사 
	for(i = 0; i < n; i++) {
		arr_temp[i] = arr[end - n + i + 1];
	}

	// n 만큼 shift
	for(i = end; i > start + n - 1; i--) {
		arr[i] = arr[i-n];
	}

	// 앞에 저장한 배열을 끼워넣음 
	for(i = 0; i < n; i++) {
		arr[start + i] = arr_temp[i];
	}
}

void right_rotate_n2(int arr[], int start, int end, int n) {
	int i;
	// 영향받는 범위만큼의 배열을 만듬 
	int arr_temp[end - start + 1];
	
	// 마지막 n개를 새로 만든 배열의 앞쪽에 복사
	for(i = 0; i < n; i++) {
		arr_temp[i] = arr[end - n + i + 1];
	}

	// 배열의 나머지 부분에 shift 시킨 값을 복사 
	for(i = n; i <= end; i++) {
		arr_temp[i] = arr[start - n + i];
	}

	// 영향 받는 범위의 배열을 통째로 덮어쓴다.
	for(i = start; i <= end; i++) {
		arr[i] = arr_temp[i - start];
	}
}

int main() {
	int arr[6] = {1,2,3,4,5,6};
	right_rotate(arr, 0, 5);
	printf("arr : {%d, %d, %d, %d, %d, %d}\n",arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

	int arr2[6] = {1,2,3,4,5,6};
	left_rotate(arr2, 0, 5);
	printf("arr2 : {%d, %d, %d, %d, %d, %d}\n",arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);

	int arr3[10] = {1,2,3,4,5,6,7,8,9,10};
	right_rotate_n2(arr3, 2, 8, 2);
	printf("arr3 : {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n",arr3[0], arr3[1], arr3[2], arr3[3], arr3[4], arr3[5], arr3[6], arr3[7], arr3[8], arr3[9]);

  int arr4[10] = {1,2,3,4,5,6,7,8,9,10};
	right_rotate_n2(arr4, 2, 8, 2);
	printf("arr4 : {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n",arr4[0], arr4[1], arr4[2], arr4[3], arr4[4], arr4[5], arr4[6], arr4[7], arr4[8], arr4[9]);	
	return 0;
}