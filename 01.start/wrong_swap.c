#include <stdio.h>

void wrong_swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int x = 1, y = 2;
	wrong_swap(x, y);
	printf("%d, %d\n", x, y);
	swap(&x, &y);
	printf("%d, %d\n", x, y);
	return 0;
}