#ifndef STUDENTDELIMITERFILEHANDLER_H_
#define STUDENTDELIMITERFILEHANDLER_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Student.h"

#define FIELD_DELIMITER_CHAR '|'
#define REGISTER_DELIMITER_CHAR '#'

void writeDelimitedStudentDataInFile(student_t, FILE*);
student_t readDelimitedStudentDataInFile(FILE*);

#endif //STUDENTDELIMITERFILEHANDLER_H_
