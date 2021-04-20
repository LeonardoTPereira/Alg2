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
    printf("\n");
    return student;
}

void printStudentData(student_t student)
{
    printf("Nome: %s\n", student.name);
    printf("Idade: %d\n", student.age);
    printf("Nota: %d\n\n", student.grade);
}