//implement a recursive function long factorial(int n). if n < 0, 
//print an error message. otherwise print n!

//calls itself

#include <stdio.h>

long factorial(int n) {
if ( n == 0 ) {
return 1;
}

else {
return n * factorial(n - 1);
}
}

int main() {
int n, result;

printf("enter an integer whose factorial you would like to calculate: ");

if (scanf("%d", &n) n < 0); {
printf("ERROR");

else {
result = factorial(n);
printf("the result is 

return 0;
}
}
/////
