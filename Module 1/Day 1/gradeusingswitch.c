#include <stdio.h>

char getgrade(int marks) {
  char grade;
 switch (marks / 10) {
    case 10:
    case 9:
      grade = 'A';
      break;
    case 8:
    case 7:
      grade = 'B';
      break;
    case 6:
      grade = 'C';
      break;
    case 5:
      grade = 'D';
      break;
    case 4:
    case 3:
      grade = 'E';
      break;
    default:
      grade = 'F';
      break;
  }

  return grade;
}

int main() {
  int marks = 65;
  char grade = getgrade(marks);

  switch (grade) {
    case 'A':printf("Grade A\n");
      break;
    case 'B':printf("Grade B\n");
      break;
    case 'C':printf("Grade C\n");
      break;
    case 'D':printf("Grade D\n");
      break;
    case 'E':printf("Grade E\n");
      break;
    case 'F':printf("Grade F\n");
      break;
    default: printf("Invalid grade\n");
      break;
  }

  return 0;
}