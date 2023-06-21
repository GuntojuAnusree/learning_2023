#include <stdio.h>

struct time {
  int hours;
  int minutes;
  int seconds;
};

void diff_between_time(struct time t1, struct time t2, struct time *diff) {
  int secs1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
  int secs2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
  diff->seconds = secs2 - secs1;
  diff->minutes = diff->seconds / 60;
  diff->seconds %= 60;
  diff->hours = diff->minutes / 60;
  diff->minutes %= 60;
}

int main() {
  struct time t1 = {10, 15, 30};
  struct time t2 = {11, 30, 0};
  struct time diff;

  diff_between_time(t1, t2, &diff);

  printf("The difference between the two time periods is: %d hours, %d minutes, %d seconds\n", diff.hours, diff.minutes, diff.seconds);

  return 0;
}