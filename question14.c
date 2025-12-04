//read two strings(no spaces) and manually cooncatenate the second to the first 
//WITHOUT using strcat().
//print result

#include <stdio.h>

int main() {

char firstString[100];
char secondString[50];

printf("enter the first string: ");
if (scanf("%s", firstString) != 1) {
printf("ERROR");
return 1;
}

printf("enter the second string: ");
if (scanf("%s", secondString) != 1) {
printf("ERROR");
return 1;
}

int i = 0;
while (firstString[i] != '\0') {
i++;
}

int j = 0;
while (secondString[j] != '\0') {
firstString[i] = secondString[j];

i++;
j++;
}

firstString[i] = '\0';

printf("the concatenated string is: %s", firstString);

return 0;
}
