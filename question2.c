// write a function int max3(int a, int b, int c) that returns the largest 
// of three ints WITHOUT using logical operators.
// print result

#include <stdio.h>

int max3(int a, int b, int c) {
int largestInt = a;


if (b > largestInt) {
largestInt = b;
}

if (c > largestInt) {
largestInt = c;
}

return largestInt;
}




int main() {

int first, second, third;
int result;

printf("Enter the first integer (a): ");
scanf("%d", &first);

printf("Enter the second integer (b): ");
scanf("%d", &second);

printf("Enter the third integer (c): ");
scanf("%d", &third);  

result = max3(first, second, third);
  
printf("The largest integer is %d", result);

return 0;
}
