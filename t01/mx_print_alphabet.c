void mx_printchar(char c);

void mx_print_alphabet(void) {
    int lower = 0;
    for (int i = 0; i < 26; i++) {
        if (lower == 0) {
            mx_printchar(65 + i);
            lower = 1;
        } else {
            mx_printchar(65 + i + 32);
            lower = 0;
        }
    }
    mx_printchar('\n');
}
