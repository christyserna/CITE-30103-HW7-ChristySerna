//read a word (no spaces) and check if it is a palindrome(case sensitive). 
// print Palindrome or NOT palindrome

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

int start = 0;
int end;

  int palindrome = 1;

  printf("enter a word(no whitespace): ");
  if (scanf("%d", word) != 1 {
    printf("ERROR");
    return 1;
  }
  end = strlen(word) - 1;

  while (start < end) {
    if (word[start] != word[end]) {
      palindrome = 0;
      break;
    }
    start++
    end++

      if (palindrome == 1 {
      printf("the word you entered IS a palindrome");
      else {
        printf("the word you entered IS NOT  a palindrome");
      }
  

return 0;
}
