#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s) {
    int counter = mx_strlen(s);

    write(1, s, counter);
}
