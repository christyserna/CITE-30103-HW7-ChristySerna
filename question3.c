//implement int isPrime(int n), that returns 1 if n is prime, 0 otherwise.
//in main(), read n and print Prime or 'Not Prime'.


#include <stdio.h> //primes are only divided by itself and 1
#include <math.h>

int isPrime(int n) {
if (n <= 1 || n % 2 == 0) {
  return 0;
}

if (n == 2) {
  return 1;
}

int main() {

int n, result;

  printf("Enter the number which you want to check is prime or not : ");
  scanf("%d", &n);


result = isPrime(n);
  
  
if (result == 1) {
  printf("%d IS prime!", n);
}
else {
  printf("%d", is NOT prime", n);
}
  

return 0;
}
