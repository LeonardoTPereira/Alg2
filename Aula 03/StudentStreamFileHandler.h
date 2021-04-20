#ifndef STUDENTSTREAMFILEHANDLER_H_
#define STUDENTSTREAMFILEHANDLER_H_

#include <stdio.h>
#include "Student.h"

void writeStudentDataInFile(student_t, FILE*);
student_t readStudentDataInFile(FILE*);

#endif //STUDENTSTREAMFILEHANDLER_H_
