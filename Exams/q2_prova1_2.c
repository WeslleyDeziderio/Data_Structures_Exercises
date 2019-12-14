#include <stdio.h>
#include <stdlib.h>

struct Node {
	int value;
	Node* next;
};

struct Node n;

void reverseList (Node** head) {
	struct Node* prev = NULL;
	struct Node* current = *head;
	struct Node* next;

	while (current != NULL) {
		next = current -> next;
		current - > next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
}

int main (void) {


	return 0;
}