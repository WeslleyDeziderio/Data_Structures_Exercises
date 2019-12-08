#include <stdio.h>
#include <stdlib.h>

#define STACK_MAX_TAM 10
#define ESC_KEY 27 

struct Stack {
	char p[STACK_MAX_TAM];
	int top;

};

struct Stack s1;

void Push (struct Stack* s, char c) {
	if (s->top < (STACK_MAX_TAM -1)) { 
		s->top++;
		s->p[s->top] = c;
	}

	else {
		printf ("Stack Overflow!\n");
	}
}

void Pop (struct Stack* s) {
	if (s->top >= 0) {
		char temp = s->p[s->top];
		s->top--;

		printf ("%c", &temp);
	}

	else {
		printf ("Stack Underflow!\n");

		exit (1);
	}
}

int main (void) {
	struct Stack s = {.top = -1};
	char exp[100];
	int i = 0;

	printf ("Enter a expression: ");
	scanf ("%s", exp);

	while (exp[i] != ESC_KEY) {
		if ((exp[i] == '(') || (exp[i] == '{') || (exp[i] == '[')) {
			Push (&s, exp[i]);
		} else if ((exp[i] == ')') || (exp[i] == '}' || exp[i] == ']')) {
				if ((exp[i] == ')')) {
					if (s.struct[s.top] == '(') {
						Pop (&exp[i]);
					} else {
						printf("Unbalanced expression! \n");
						break;
					}
				}
		}
	}



	return 0;
}