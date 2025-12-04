//read n ints into an array (max 100), compute and sum average and print both with labels


#include <stdio.h>

int main() {

int arr[100];
int n;
int sum = 0;
float average;

printf("how many integers would you like to enter (max 100): ");

if (scanf("%d", &n) != 1 || n > 100) {
printf("ERROR");
return 1;
}

printf("enter your integers: ");

for (int i = 0; i < n; i++) {
printf("enter the next number %d", i+1);

if (scanf("%d", &arr[i]) != 1) {
printf("ERROR");
return 1;
}

sum += arr[i];

}

average = (float)sum / n;

printf("the total sum is %d", sum);
printf("the total average is %f", average);

return 0; 
}
