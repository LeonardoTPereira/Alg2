#include "StudentFixedSizeFieldFileHandler.h"

void writeFixedStudentDataInFile(student_t student, FILE *filePointer)
{
    fwrite(&student, sizeof(student_t), 1, filePointer);
}

student_t readFixedStudentDataInFile(FILE *filePointer)
{
    student_t student;
    fread(&student, sizeof(student_t), 1, filePointer);
    return student;
}