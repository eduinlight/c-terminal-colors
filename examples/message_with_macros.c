#include "../src/terminal-colors.h"
#include <stdio.h>

int main() {
  printf("Thi is a standard message\n");
  set_tc_red();
  printf("But this message is red\n");
  set_tc_green();
  printf("And this message is green\n");
  set_tc_default();
  printf("Back to normal message\n");
  return 0;
}
