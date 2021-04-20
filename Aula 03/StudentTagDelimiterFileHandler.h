#ifndef STUDENTTAGDELIMITERFILEHANDLER_H_
#define STUDENTTAGDELIMITERFILEHANDLER_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Student.h"

#define DELIMITERCHAR '|'
#define TAGDELIMITERCHAR '='
#define NAMETAG "NAME"
#define AGETAG "AGE"
#define GRADETAG "GRADE"
#define TOTALFIELDS 3

void writeTagDelimitedStudentDataInFile(student_t, FILE*);
student_t readTagDelimitedStudentDataInFile(FILE*);

#endif //STUDENTTAGDELIMITERFILEHANDLER_H_
