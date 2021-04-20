#ifndef STUDENTFIXEDSIZEFIELDFILEHANDLER_H_
#define STUDENTFIXEDSIZEFIELDFILEHANDLER_H_

#include <stdio.h>
#include "Student.h"

void writeFixedStudentDataInFile(student_t, FILE*);
student_t readFixedStudentDataInFile(FILE*);

#endif //STUDENTFIXEDSIZEFIELDFILEHANDLER_H_
