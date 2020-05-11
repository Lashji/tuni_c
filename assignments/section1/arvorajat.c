
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int arvorajat(int argc, char *argv[]) {
    int i, j;
    int values[8];
    char *strings[] = {"char", "uchar", "short", "ushort", "int", "uint", "long", "ulong"};
    for (i = 1; i < argc; i++) {
        if (atoi(argv[i]) < CHAR_MAX) {
            values[0] = 1;
        }
        if (atoi(argv[i]) < UCHAR_MAX) {
            values[1] = 1;
        }
        if (atoi(argv[i]) < SHRT_MAX) {
            values[2] = 1;
        }
        if (atoi(argv[i]) < USHRT_MAX) {
            values[3] = 1;
        }
        if (atoi(argv[i]) < INT_MAX) {
            values[4] = 1;
        }
        if (atoi(argv[i]) < UINT_MAX) {
            values[5] = 1;
        }
        if (atoi(argv[i]) < LONG_MAX) {
            values[6] = 1;
        }
        if (atoi(argv[i]) < ULONG_MAX) {
            values[7] = 1;
        }

        printf("%s", argv[i]);
        for (j = 0; j < 8; j++) {

            if (values[j] == 1) {
                if (j + 1 < 8) {
                    printf("%s, ", strings[j]);
                } else {
                    printf("%s", strings[j]);
                }
            }
        }

    }

    return 0;
}