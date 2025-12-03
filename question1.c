// write a function float toCelsius(float f) that converts farenheit to celsius.
// in main(), read f, call the function, and print the celsius value to two decimals

#include <stdio.h>

float toCelsius(float f) {
return (f - 32.0) * (5.0/9.0);  //form for converting f to c
}

int main() {

  float f, celsius;

  printf("Enter your temperature in Farenheit Terms: ");
  scanf("%f", &f);

  celsius = toCelsius(f);

  printf("The conversion of your Farenheit Temperature to Celsius is %.2f",celsius);
    
return 0;
}
