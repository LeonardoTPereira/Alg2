#include "Student.h"

student_t readStudentDataFromInput()
{
    student_t student;
    printf("nome do estudante: ");
    scanf("%s", student.name);
    printf("idade: ");
    scanf("%d", &student.age);
    printf("nota: ");
    scanf("%d", &student.grade);
    printf("Observacoes: ");
    scanf("%s", student.extra);
    printf("\n");
    return student;
}

void printStudentData(student_t student)
{
    printf("Nome: %s\n", student.name);
    printf("Idade: %d\n", student.age);
    printf("Nota: %d\n", student.grade);
    if(strlen(student.extra) > 0)
        printf("Observacoes: %s\n\n", student.extra);
    else
        printf("\n\n");
}