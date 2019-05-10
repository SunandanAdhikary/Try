#include <stdio.h>
#include <stdlib.h>
#include <marks.h>
#include <subj.h>

struct stu
{
//    struct marks *total;
    char firstname[10];
    char midname[10];
    char surname[10];
    subj subjects[10];
    int standard;

}student;