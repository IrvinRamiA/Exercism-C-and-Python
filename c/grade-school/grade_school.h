#ifndef GRADE_SCHOOL_H
#define GRADE_SCHOOL_H

#include <stddef.h>
#include <stdint.h>

#define MAX_NAME_LENGTH 20
#define MAX_STUDENTS 20

typedef struct
{
    uint8_t grade;
    char name[MAX_NAME_LENGTH];
} student_t;

typedef struct
{
    size_t count;
    student_t students[MAX_STUDENTS];
} roster_t;

void add_student(char *name_buffer, uint8_t grade);
roster_t get_roster(void);
roster_t get_grade(uint8_t desired_grade);
void clear_roster(void);

#endif
