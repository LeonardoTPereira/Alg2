#include "StudentDelimiterFileHandler.h"

static char readCurrentInput(FILE *filePointer, char *currentInput)
{
    char currentChar;
    int currentInputIndex;
    currentInputIndex = 0;
    currentChar = fgetc(filePointer);
    while((currentChar != EOF) && (currentChar != DELIMITERCHAR))
    {
        currentInput[currentInputIndex++] = currentChar;
        currentChar = fgetc(filePointer);
    }
    currentInput[currentInputIndex] = '\0';
    return currentChar;
}

void writeDelimitedStudentDataInFile(student_t student, FILE *filePointer)
{
    fprintf(filePointer, "%s", student.name);
    fputc(DELIMITERCHAR, filePointer);
    fprintf(filePointer, "%d", student.age);
    fputc(DELIMITERCHAR, filePointer);
    fprintf(filePointer, "%d", student.grade);
    fputc(DELIMITERCHAR, filePointer);
}

student_t readDelimitedStudentDataInFile(FILE *filePointer)
{
    student_t student;
    char currentInput[50];
    readCurrentInput(filePointer, currentInput);
    strcpy(student.name, currentInput);
    readCurrentInput(filePointer, currentInput);
    student.age = atoi(currentInput);
    readCurrentInput(filePointer, currentInput);
    student.grade = atoi(currentInput);
    return student;
}