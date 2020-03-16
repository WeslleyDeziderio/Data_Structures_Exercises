#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int MaxValueRec (int vector[], int vector_size){
    static int i = 0;
	static int max_value = -9999;

    if (i < vector_size) {
        if (vector[i] > max_value) {
            max_value = vector[i];
		}

        i++;

        MaxValueRec (vector, vector_size);

    }

    return max_value;
}

int main (void) {
	int i;
	int array[MAX_SIZE];
	int array_size;

	printf ("Insert the size of the vector: ");
	scanf ("%d", &array_size);

	printf ("Insert %d elements: ", array_size);

	for (i = 0; i < array_size; i++) {
		scanf ("%d", &array[i]);
	}

	printf ("The max value of the vector is %d: \n", MaxValueRec (array, array_size));

	return 0;
}