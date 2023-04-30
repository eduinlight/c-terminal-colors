#ifndef C_TERMINAL_COLORS_HEADER
#define C_TERMINAL_COLORS_HEADER

#define TERMINAL_COLOR_BLACK "\033[0;30m"
#define TERMINAL_COLOR_RED "\033[0;31m"
#define TERMINAL_COLOR_GREEN "\033[0;32m"
#define TERMINAL_COLOR_YELLOW "\033[0;33m"
#define TERMINAL_COLOR_BLUE "\033[0;34m"
#define TERMINAL_COLOR_PURPLE "\033[0;35m"
#define TERMINAL_COLOR_CYAN "\033[0;36m"
#define TERMINAL_COLOR_WHITE "\033[0;37m"
#define TERMINAL_COLOR_DEFAULT "\033[0m"

#define set_tc_black() printf("%s", TERMINAL_COLOR_BLACK);
#define set_tc_red() printf("%s", TERMINAL_COLOR_RED);
#define set_tc_green() printf("%s", TERMINAL_COLOR_GREEN);
#define set_tc_yellow() printf("%s", TERMINAL_COLOR_YELLOW);
#define set_tc_blue() printf("%s", TERMINAL_COLOR_BLUE);
#define set_tc_purple() printf("%s", TERMINAL_COLOR_PURPLE);
#define set_tc_cyan() printf("%s", TERMINAL_COLOR_CYAN);
#define set_tc_white() printf("%s", TERMINAL_COLOR_WHITE);
#define set_tc_default() printf("%s", TERMINAL_COLOR_DEFAULT);

#endif // !C_TERMINAL_COLORS_HEADER
