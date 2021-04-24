#include "StudentDelimiterRegisterAndFieldFileHandler.h"

static char readCurrentInput(FILE *filePointer, char *currentInput)
{
    char currentChar;
    int currentInputIndex;
    currentInputIndex = 0;
    currentChar = fgetc(filePointer);
    while((currentChar != EOF) && (currentChar != FIELD_DELIMITER_CHAR) && (currentChar != REGISTER_DELIMITER_CHAR))
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
    fputc(FIELD_DELIMITER_CHAR, filePointer);
    fprintf(filePointer, "%d", student.age);
    fputc(FIELD_DELIMITER_CHAR, filePointer);
    fprintf(filePointer, "%d", student.grade);
    fputc(FIELD_DELIMITER_CHAR, filePointer);
    if(strcmp(student.extra, "0"))
    {
        fprintf(filePointer, "%s", student.extra);
        fputc(FIELD_DELIMITER_CHAR, filePointer);
    }
    fputc(REGISTER_DELIMITER_CHAR, filePointer);
}

student_t readDelimitedStudentDataInFile(FILE *filePointer)
{
    student_t student;
    char currentInput[50];
    if( readCurrentInput(filePointer, currentInput) != REGISTER_DELIMITER_CHAR)
        strcpy(student.name, currentInput);
    if( readCurrentInput(filePointer, currentInput) != REGISTER_DELIMITER_CHAR)
        student.age = atoi(currentInput);
    if( readCurrentInput(filePointer, currentInput) != REGISTER_DELIMITER_CHAR)
        student.grade = atoi(currentInput);
    if( readCurrentInput(filePointer, currentInput) != REGISTER_DELIMITER_CHAR)
        strcpy(student.extra, currentInput);
    else
        strcpy(student.extra, "\0");
    return student;
}