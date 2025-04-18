#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char name[50];
    char id[10];
    int age;
    int grades[5];
}Student;

typedef struct
{
    int x;
    int y;
}Point;

typedef struct
{
    int *array;
}Data;

void print_student(Student student);
void print_points(Point points[]);
int main(void)
{
    Student kevin;
    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id, "40121212");

    kevin.age = 40;
    kevin.grades[0] = 1;
    kevin.grades[1] = 2;
    kevin.grades[2] = 3;
    kevin.grades[3] = 4;
    kevin.grades[4] = 5;

    print_student(kevin);

    Point p1 = {5, 10};
    Point p2 = {
        .y = 8,
        .x = 2
    };

    p1 = p2;
    printf("p1.x: %d\n", p1.x);
    printf("p1.y: %d\n", p1.y);

    Point points[10];

    for (int i = 0; i < 10; i++)
    {
        points[i].x = i;
        points[i].y = 10 - i;
    }

    print_points(points);

    Data x;
    Data y;
    x.array = malloc(sizeof(int) * 5);
    y.array = malloc(sizeof(int) * 5);
    x.array[0] = 1;
    x.array[1] = 2;
    x.array[2] = 3;
    x.array[3] = 4;
    x.array[4] = 5;

    y.array[1] = 9;
    y.array[0] = 9;
    y.array[2] = 9;
    y.array[3] = 9;
    y.array[4] = 9;

    x = y;

    for(int i = 0; i < 5; i++)
    {
        printf("x.array[%d] = %d\n", i, x.array[i]);
    }

    return 0;
}

void print_student(Student student)
{
    printf("Name: %s\n", student.name);
    printf("ID: %s\n", student.id);
    printf("Age: %d\n", student.age);
    printf("Grades: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", student.grades[i]);
    }
    printf("\n");
}

void print_points(Point points[])
{
    for(int i = 0; i < 10; i++)
    {
        printf("p%d = (%d,%d)\n", i, points[i].x, points[i].y);
    }
}