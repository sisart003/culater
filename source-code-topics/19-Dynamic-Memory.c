#include <stdio.h>
#include <stdlib.h>

void memory_hog(int size);

int main(void)
{
	int size = 0;
	printf("Enter Size: ");
	scanf("%d", &size);
	// int *a = malloc(sizeof(int) * 10);
	int *a = calloc(10, sizeof(int));
	for(int i = 0; i < 10; i++) a[i] = 10 - i;

	for(int i = 0; i < size; i++)
		printf("a[%d] = %d\n", i, a[i]);
	printf("\n");

	for(int i = 0; i < (size+5); i++)
		printf("a[%d] = %d\n", i, a[i]);
	printf("\n");

	printf("a: %p\n", a);

	a = realloc(a, sizeof(int) * (size + 5));
	
	// int *save = a;
	free(a);

	// printf("save: %p\n", a);
	// for(int i = 0; i < 10; i++)
	// 	printf("a[%d] = %d\n", i, a[i]);
	// printf("\n");

	return 0;
}

void memory_hog(int size)
{
	int *a = malloc(size);
}