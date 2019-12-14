#include <stdio.h>
#include <stdlib.h>

struct Node {
	int value;
	Node* next;
};

struct Node n;

void destructList (Node** head) {
	struct Node* current = *head;
	struct Node* = next;

	while (current != NULL) {
		next = current -> next;
		free (current);
		current = next;
	}

	*head = NULL;
}

int main (void) {
	

	return 0;
}