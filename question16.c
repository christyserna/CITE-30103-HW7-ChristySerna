//define struct Student { char name [40]; int roll; float marks; }; 
//read one students data and print in neatly

include <stdio.h>

struct Student {
char name[40];
int roll;
float marks;
};

int main() {

struct Student a;

printf("enter student (a's) name : ");
scanf("%s", a.name);

printf("enter student (a's) roll : ");
scanf("%d", &a.roll);

printf("enter student (a's) marks : ");
scanf("%f", &a.marks);

printf("the student's name is %s", a.name);
printf("the student's name is %d", a.roll);
printf("the student's name is %f", a.marks);

return 0;
}
