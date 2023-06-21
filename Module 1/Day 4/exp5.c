#include <stdio.h>

struct student {
  int roll_number;
  char name[50];
};

void swap_structures(struct student *s1, struct student *s2) {
  int temp_roll_number = s1->roll_number;
  char temp_name[50] = s1->name;

  s1->roll_number = s2->roll_number;
  strcpy(s1->name, s2->name);

  s2->roll_number = temp_roll_number;
  strcpy(s2->name, temp_name);
}

int main() {
  struct student s1 = {101, "Anu"};
  struct student s2 = {102, "Veda"};

  printf("s1: roll number = %d, name = %s\n", s1.roll_number, s1.name);
  printf("s2: roll number = %d, name = %s\n", s2.roll_number, s2.name);

  swap_structures(&s1, &s2);

  printf("After swapping:\n");
  printf("s1: roll number = %d, name = %s\n", s1.roll_number, s1.name);
  printf("s2: roll number = %d, name = %s\n", s2.roll_number, s2.name);

  return 0;
}
