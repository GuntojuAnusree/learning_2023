#include <stdio.h>

struct box {
  int length;
  int width;
  int height;
};

void volume(struct box *ptr) {
  int vol = ptr->length * ptr->width * ptr->height;
  printf("The volume of the box is: %d\n", vol);
}

void surfacearea(struct box *ptr) {
  int area = 2 * (ptr->length * ptr->width + ptr->length * ptr->height + ptr->width * ptr->height);
  printf("The surface area of the box is: %d\n", area);
}

int main() {
  struct box box1 = {10, 20, 30};
  struct box *ptr = &box1;

  volume(ptr);
  surfacearea(ptr);

  return 0;
}