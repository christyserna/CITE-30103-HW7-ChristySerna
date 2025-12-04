//from an array of 5 Student records, find and print the student with the highest marks
// print name, roll, marks

#include <stdio.h>

struct Student {
char name[50];
char roll;
float marks;
};

int main() {

  struct Student students[5] = {

{"chandler", 'B', 83},
{"monica", 'A', 94},
{"rachel", 'C', 71},
{"ross", 'F', 21},
{"phoebe", 'D', 57}
};

int highestMark = 0;

for (int i = 1; i < 5; i++) {
if (students[i].marks > students[highestMark].marks) {
highestMark = i;
}

printf("the data of the students with the highest mark is: %s", students[highestMark].name);
printf("the roll of this student is: %c", students[highestMark].roll);
printf("the mark of this student is: %f", students[highestMark].marks);
}
  
return 0;
}
