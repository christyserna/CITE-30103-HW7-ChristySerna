//write a function int max3(int a, int b, int c) that returns the largest of three ints WITHOUT using logical operators.
//print result

#include <stdio.h>

int max3(int a, int b, int c) {
largestInt = a;
int b, c;


if (b > largestInt) {
largestInt = b;
}

else if (c > largestInt) {
largestInt = c;
}

else {
largestInt = a;
}

printf("The largest int is %d", largestInt)

return 0;
}
