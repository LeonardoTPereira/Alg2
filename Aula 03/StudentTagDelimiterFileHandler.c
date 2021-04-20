#include "StudentTagDelimiterFileHandler.h"

static char readCurrentInput(FILE *filePointer, char *currentInput, char delimiter)
{
    char currentChar;
    int currentInputIndex;
    currentInputIndex = 0;
    currentChar = fgetc(filePointer);
    while((currentChar != EOF) && (currentChar != delimiter))
    {
        currentInput[currentInputIndex++] = currentChar;
        currentChar = fgetc(filePointer);
    }
    currentInput[currentInputIndex] = '\0';
    return currentChar;
}

void writeTagDelimitedStudentDataInFile(student_t student, FILE *filePointer)
{
    fprintf(filePointer, "%s", NAMETAG);
    fputc(TAGDELIMITERCHAR, filePointer);
    fprintf(filePointer, "%s", student.name);
    fputc(DELIMITERCHAR, filePointer);
    fprintf(filePointer, "%s", AGETAG);
    fputc(TAGDELIMITERCHAR, filePointer);
    fprintf(filePointer, "%d", student.age);
    fputc(DELIMITERCHAR, filePointer);
    fprintf(filePointer, "%s", GRADETAG);
    fputc(TAGDELIMITERCHAR, filePointer);
    fprintf(filePointer, "%d", student.grade);
    fputc(DELIMITERCHAR, filePointer);
}

student_t readTagDelimitedStudentDataInFile(FILE *filePointer)
{
    student_t student;
    int nFields = 0;
    char currentInput[50], currentTag[50];
    do {
        readCurrentInput(filePointer, currentTag, TAGDELIMITERCHAR);
        readCurrentInput(filePointer, currentInput, DELIMITERCHAR);
        if(strcmp(currentTag, NAMETAG) == 0)
            strcpy(student.name, currentInput);
        else if(strcmp(currentTag, AGETAG) == 0)
            student.age = atoi(currentInput);
        else if(strcmp(currentTag, GRADETAG) == 0)
            student.grade = atoi(currentInput);
        nFields++;
    }while(nFields < TOTALFIELDS);
    return student;
}