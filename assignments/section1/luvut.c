//
// Created by lassi on 6.5.2020.
//

#include "luvut.h"
#include <stdio.h>

void luvut() {
    int i;

    for (i = 0; i <= 100; i++) {
        if (i % 5 != 0 && i % 3 != 0) {
            printf("%d\n", i);
        } else if (i % 5 != 0) {
            printf("%d\n", i);
        } else if (i % 3 != 0) {
            printf("%d\n", i);
        }

    }
}