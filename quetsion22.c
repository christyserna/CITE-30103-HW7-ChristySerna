// input 5 integers into an array and print them using pointer arithmetic only (no [] indexing)

#include <stdio.h>

int main() {

int arr[5];
int size = 5;
int i;

printf("enter your five integers: ");

for (i = 0; i < size; i++) {
printf("element %d: ", i + 1);

if (scanf("%d", (arr + i )) != 1) {
printf("ERROR");
return 1;
}

printf("you entered: ");

for (i = 0; i < size; i++) {
printf("element %d: %d", i + 1, *(arr + i));
}
}
return 0;
}
