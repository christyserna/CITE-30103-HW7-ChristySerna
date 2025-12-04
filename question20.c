//write a function void printStudent(struct Student s) that prints the 
//fields of a passed-in Student/ in main(), populate one Student and call the function
//idk what it means by populate im ngl.

#include <stdio.h>
#include <string.h>

struct Student {
char name[50];
char roll;
float marks;
};

void printStudent(struct Student s) {
printf("the students name is: %s", s.name);
printf("the students roll is: %c", s.roll);
printf("the students marks is: %f", s.marks);
}

int main() {

  struct Student firstStudent;

  strcpy(firstStudent.name, "Pusheen The Cat");
  firstStudent.roll = 'A';
  firstStudent.marks = 99.0;

  
  printStudent(firstStudent);


return 0;
}
