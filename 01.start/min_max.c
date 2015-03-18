#include <stdio.h>

int min(int x, int y) {
	return x < y ? x : y;
}

int max(int x, int y) {
	return x > y ? x : y;
}

int main() {
	printf("min(3,5) : %d\n", min(3,5));
	printf("max(9,7) : %d\n", min(9,7));

	return 0;
}
