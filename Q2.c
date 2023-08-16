#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 5

    typedef union Colors {
        unsigned char red;
        unsigned char green;
        unsigned char blue;
    }Color;

    typedef struct Student {
        char name[50];
        int rollNumber;
        float marks;
    }Student;

int main(){

    Student students[MAX_STUDENTS];

    for (int i = 0; i < 5;i++) {
        strcpy(students[i].name, "Student name %d",i);
    }

return 0;}