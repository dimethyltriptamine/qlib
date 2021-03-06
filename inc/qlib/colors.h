#include <stdarg.h>

#define PREFIX_FMT "\033[%im"

#define RED_FG 31
#define GREEN_FG 32
#define YELLOW_FG 33
#define BLUE_FG 34
#define RESET_FG 0x0

#define RED_BG 41
#define GREEN_BG 42
#define YELLOW_BG 43
#define BLUE_BG 44
#define RESET_BG 48

#define RESET_STR "\033[48m";

/* Sets the terminal color to something, like ncurses shit */

void
set_color(int color);

/* like vprintf but you can pass colors to it */

int
vcprintf(int fg, int bg, const char *fmt, va_list ap);

/* Same as vcprintf() but thread safe */

int
vcprintf_r(int fg, int bg, const char *fmt, va_list ap);

/* As printf() but with colors */

int
cprintf(int fg, int bg, const char *fmt, ...);

/* Same as cprintf() but thread safe */

int
cprintf_r(int fg, int bg, const char *fmt, ...);
