#include <stdio.h>

void add(int x);
void array_add(int array[]);

int main(void)
{
		
	int a = 5;
	add(a);
	printf("a: %d\n", a);
	
	int myarray[5] = {1, 2, 3, 4, 5};
	array_add(myarray);
	printf("myarray[0]: %d\n", myarray[0]);
	printf("myarray: %p\n", myarray);
	
	return 0;
}

void array_add_ptr(int *array)
{
	printf("array: %p\n", array);
	array[0] = array[0] + 1;
}

void array_add(int array[])
{
	
	printf("array: %p\n", array);
	array[0] = array[0] + 1;
}

void add(int x)
{
	printf("x: %d\n", x);
	x = x + 1;
}