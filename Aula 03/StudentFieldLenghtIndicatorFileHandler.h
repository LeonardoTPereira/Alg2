#ifndef STUDENTFIELDLENGHTINDICATORFILEHANDLER_H_
#define STUDENTFIELDLENGHTINDICATORFILEHANDLER_H_

#include <stdio.h>
#include <string.h>
#include "Student.h"

void writeLenghtIndicatorStudentDataInFile(student_t, FILE*);
student_t readLenghtIndicatorStudentDataInFile(FILE*);

#endif //STUDENTFIELDLENGHTINDICATORFILEHANDLER_H_
