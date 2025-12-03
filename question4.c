//write a function void swap(int *x, int *y) that exchanges two integers by reference
//in main, read two ints and print before AND after swapping

#include <stdio.h>

void swap(int *x, int*y) {
int meow = *x;
*x = *y;
*y = meow;

}


int main() {
int first, second;
  
printf("what is your first integer: ");
scanf("%d", &first);

printf("what is your second integer: ");
scanf("%d", &second);


printf("BEFORE the swap, your values are: first = %d, second = %d", first, second);
swap(&first, &second);
printf("AFTER the swap, your values are: first = %d, second = %d", first, second);

return 0;
}
