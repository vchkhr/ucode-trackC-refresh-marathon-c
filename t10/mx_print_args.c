#include <unistd.h>

void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    if (argc < 2)
        return 0;

    for (int i = 1; i < argc; i++) {
        int counter = 0;
        const char *s_count = argv[i];

        while (*s_count++)
            counter++;

        write(1, argv[i], counter);
        write(1, "\n", 1);
    }

    return 0;
}
