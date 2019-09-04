#include <stdio.h>
#include <stdlib.h>
struct Student{
  char name[100];
  float average;
  int age;
};

int compareStudent(const void *s1, const void *s2){
  struct Student *stu1 = (struct Student *)s1;
  struct Student *stu2 = (struct Student *)s2;
  if(stu1->average < stu2->average)
    return -1;
  else if(stu1->average > stu2->average)
    return 1;
  else
    return 0;
}

int sortStudent(){
  struct Student students[5]={
    {
      "name",
      8.3,
      10
    },
    {
      "name2",
      18.4,
      10
    },
    {
      "name3",
      8.4,
      4
    },
    {
      "name4",
      33.4,
      30
    },
    {
      "name5",
      123.0,
      12
    },
  };
  for(int i = 0; i< 5; ++i)
    printf("%s\t%f\t%d\n", students[i].name,students[i].average,students[i].age);
  qsort(students, 5, sizeof(struct Student), compareStudent);
  for(int i = 0; i< 5; ++i)
    printf("%s\t%f\t%d\n", students[i].name,students[i].average,students[i].age);
  return 0;
}
