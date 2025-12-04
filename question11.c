//read a string(no spaces) and compute its length without using strlen(), then print length

#include <stdio.h>

int main() {

char string[100];
int length;

printf("enter a string (no spaces) : ");
  
if(scanf("%99s", string) != 1) {
printf("ERROR");
return 1;
}

for (length = 0; string[length] != '\0'; length++) {
}

printf("the length of your string is: %d", length);

  return 0;
}
