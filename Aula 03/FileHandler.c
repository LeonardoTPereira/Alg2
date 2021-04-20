#include "FileHandler.h"

void createStudentFile() {
    FILE *filePointer;
    filePointer = fopen(STUDENTFILENAME, "w");
    student_t student;
    printf("Lendo dados\n\n");
    for (int i = 0; i < TAM; ++i)
    {
        student = readStudentDataFromInput();
        writeTagDelimitedStudentDataInFile(student, filePointer);
    }
    fclose(filePointer);
}

void readStudentFile()
{
    FILE *filePointer;
    filePointer = fopen(STUDENTFILENAME, "r");
    student_t student;
    printf("Dados no arquivo\n\n");
    for (int i = 0; i < TAM; ++i)
    {
        student = readTagDelimitedStudentDataInFile(filePointer);
        printStudentData(student);
    }
    fclose(filePointer);
}