#include <stdio.h>
#include <malloc.h>

struct _node {
	int key;
	struct _node *next;
} _node;

typedef struct _node node_t;

int number;
int number2;

node_t *head = NULL, *tail = NULL;

void insert_node(int n) {
	node_t *new_node = (node_t *) malloc(sizeof(node_t));
	new_node->key = n;
	new_node->next = NULL;
	if(head == NULL) {
		head = new_node;
		tail = new_node;
	} else {
		tail->next = new_node;
		tail = new_node;
	}
}

int delete_node() {
	node_t *node;
	int r;

	if(head == NULL) {
		return -1;
	}

	node = head;
	head = head->next;

	if(head == NULL) {
		tail = NULL;
	}
	r = node->key;
	free(node);
	return r;
}

int main() {
	while(true) {
		printf("input number: ");
		scanf("%d", &number);

		if(number == 0) {
			printf("[%d]\n", delete_node());
		} else if(number < 0) {
			printf("quit!");
			break;
		} else {
			insert_node(number);
		}
	}
}