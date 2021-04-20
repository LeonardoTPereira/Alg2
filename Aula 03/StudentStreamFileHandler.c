#include "StudentStreamFileHandler.h"

void writeStudentDataInFile(student_t student, FILE *filePointer)
{
    fprintf(filePointer, "%s", student.name);
    fprintf(filePointer, "%d", student.age);
    fprintf(filePointer, "%d", student.grade);
}

student_t readStudentDataInFile(FILE *filePointer)
{
    student_t student;
    fscanf(filePointer, "%s", student.name);
    fscanf(filePointer, "%d", &student.age);
    fscanf(filePointer, "%d", &student.grade);
    return student;
}