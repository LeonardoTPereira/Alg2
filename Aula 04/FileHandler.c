#include "FileHandler.h"

void createStudentFile() {
    FILE *filePointer;
    filePointer = fopen(STUDENTFILENAME, "w");
    student_t student;
    printf("Lendo dados\n\n");
    for (int i = 0; i < TAM; ++i)
    {
        student = readStudentDataFromInput();
        writeDelimitedStudentDataInFile(student, filePointer);
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
        student = readDelimitedStudentDataInFile(filePointer);
        printStudentData(student);
    }
    fclose(filePointer);
}