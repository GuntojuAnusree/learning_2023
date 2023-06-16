#include <stdio.h>

int is_vowel(char ch) {
  switch (ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      return 1;
    default:
      return 0;
  }
}

int main() {
  char ch = 'a';
  int result = is_vowel(ch);

  if (is_vowel == 1) {
    printf("Vowel\n");
  } else {
    printf("Not vowel\n");
  }

  return 0;
}