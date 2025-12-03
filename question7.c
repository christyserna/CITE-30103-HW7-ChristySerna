//input 10 ints in an array, find and print the smallest value


#include <stdio.h> 


int main() {

int arr[10];
int i, smallest;

printf("enter the 10 ints that you would like to be put in the array : ");

for (i = 0; i < 10; i++) {
printf("enter number %d: ", i + 1);

if (scanf("%d", &arr[i]) != 1) {
printf("ERROR");
return 1;
}
}

smallest = arr[0];

for (i = 1; i < 10; i++) {
if (arr[i] < smallest) {
smallest = arr[i];
}
}

printf("the smallest value in the array is: %d", smallest);

return 0;
}
