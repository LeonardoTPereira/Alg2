#ifndef FILEHANDLER_H_
#define FILEHANDLER_H_

#include <stdio.h>
#include "Student.h"
#include "StudentDelimiterRegisterAndFieldFileHandler.h"

#define TAM 2
#define STUDENTFILENAME "student.txt"

void createStudentFile();
void readStudentFile();

#endif //FILEHANDLER_H_
