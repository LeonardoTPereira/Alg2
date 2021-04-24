#ifndef STUDENT_H_
#define STUDENT_H_

#include <stdio.h>
#include <string.h>

typedef struct student_t
{
    char name[20];
    int age;
    int grade;
    char extra[20];
} student_t;

student_t readStudentDataFromInput();
void printStudentData(student_t);

#endif //STUDENT_H_
