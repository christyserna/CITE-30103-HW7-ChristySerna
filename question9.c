//read 5 ints and reverse them in place in the same array, NOT using a second array
//print reversed array

include <stdio.h>

int main() {

  int arr[5] = {0,1,2,3,4};
  int n = 5;
  int i;

printf("the original array is: ");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}

for (i = 0; i < n / 2; i++) {
  int j = n - 1 - i;
  
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

printf("the reversed array is : ");
for (i = 0; i < n; i++) {
  printf("%d ", arr[i]);
}
  
return 0;
}
