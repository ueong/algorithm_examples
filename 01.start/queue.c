#include <stdio.h>
const int QUEUE_SIZE = 8;
int queue_arr[QUEUE_SIZE];
int head = 0, tail = -1;
int elements = 0;
int number;

bool is_empty() {
	return elements <= 0;
}

bool is_full() {
	return elements >= QUEUE_SIZE;
}

void dequeue() {
	if(is_empty()) {
		printf("queue empty!\n");
		return;
	}
	printf("[%d]\n", queue_arr[head]);
	head = (head + 1) % QUEUE_SIZE;
	elements--;
}

void enqueue(int number) {
	if(is_full()) {
		printf("queue full!\n");
		return;
	}
	tail = (tail + 1) % QUEUE_SIZE;
	queue_arr[tail] = number;
	elements++;
}

int main() {
	while(true) {
		printf("input number: ");
		scanf("%d", &number);

		if(number == 0) {
			dequeue();
		} else if(number < 0) {
			printf("quit!");
			break;
		} else {
			enqueue(number);
		}
	}
}
