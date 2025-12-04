//create int square(int x) and call it through function pointer declared in main()
// print the result

#include <stdio.h>
#include <stdlib.h>

int square(int x) {
return x * x;
}

int main() {

int (*functionPointer)(int);

functionPointer = square;

int num = 2;
int result = functionPointer(num);

printf("number: ", num);
printf("address stored in pointer: %d", (void*)functionPointer);
printf("result: ", result);

return 0;
}
