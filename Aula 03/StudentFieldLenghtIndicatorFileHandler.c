#include "StudentFieldLenghtIndicatorFileHandler.h"

void writeLenghtIndicatorStudentDataInFile(student_t student, FILE *filePointer)
{
    int fieldSize;
    fieldSize = strlen(student.name);
    fprintf(filePointer, "%d", fieldSize);
    fwrite(student.name, fieldSize, 1, filePointer);
    fieldSize = sizeof(student.age);
    fprintf(filePointer, "%d", fieldSize);
    fwrite(&student.age, fieldSize, 1, filePointer);
    fieldSize = sizeof(student.grade);
    fprintf(filePointer, "%d", fieldSize);
    fwrite(&student.grade, fieldSize, 1, filePointer);
}

student_t readLenghtIndicatorStudentDataInFile(FILE *filePointer)
{
    student_t student;
    int fieldSize;
    fscanf(filePointer, "%d", &fieldSize);
    fread(student.name, fieldSize, 1, filePointer);
    student.name[fieldSize] = '\0';
    fscanf(filePointer, "%d", &fieldSize);
    fread(&student.age, fieldSize, 1, filePointer);
    fscanf(filePointer, "%d", &fieldSize);
    fread(&student.grade, fieldSize, 1, filePointer);
    return student;
}