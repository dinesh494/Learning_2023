/* Write a program using structures to calculate the difference between two time periods using a user-defined function.*/

#include <stdio.h>

struct time {
  int hour;
  int min;
  int sec;
};

void diff_between_time(struct time t1, struct time t2, struct time *diff) {
  int diff_hours = t2.hour - t1.hour;
  int diff_mins = t2.min - t1.min;
  int diff_secs = t2.sec - t1.sec;

  if (diff_secs < 0) {
    diff_secs += 60;
    diff_mins--;
  }

  if (diff_mins < 0) {
    diff_mins += 60;
    diff_hours--;
  }

  diff->hour = diff_hours;
  diff->min = diff_mins;
  diff->sec = diff_secs;
}

int main() {
  struct time t1 = {10, 30, 10};
  struct time t2 = {11, 20, 30};
  struct time diff;

  diff_between_time(t1, t2, &diff);

  printf("The difference between the two time periods is: %d:%d:%d\n", diff.hour, diff.min, diff.sec);

  return 0;
}
