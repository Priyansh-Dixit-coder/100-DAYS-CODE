// Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    printf("SUCCESS=%d, ", SUCCESS);
    printf("FAILURE=%d, ", FAILURE);
    printf("TIMEOUT=%d\n", TIMEOUT);

    return 0;
}
