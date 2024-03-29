# c-terminal-colors
Colors definition for terminal output used in C/C++ terminal programs. Visit https://chrisyeh96.github.io/2020/03/28/terminal-colors.html for mor info.

## Example
```C
#include <stdio.h>
#include "../src/terminal-colors.h"

int main() {
  printf("Thi is a standard message\n"
      "%sBut this message is red\n"
      "%sAnd this message is green\n"
      "%sBack to normal message\n",
      TERMINAL_COLOR_RED,
      TERMINAL_COLOR_GREEN,
      TERMINAL_COLOR_DEFAULT);
  return 0;
}
```

## Same example with macros
```C
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
```

### Output
![example program](./example.jpeg)

## License

Published under the MIT license, see
[LICENSE](./LICENSE).

