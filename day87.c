// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char roleStr[20];
    enum Role r;

    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", roleStr);

    if (strcmp(roleStr, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(roleStr, "USER") == 0)
        r = USER;
    else if (strcmp(roleStr, "GUEST") == 0)
        r = GUEST;
    else {
        printf("Invalid role!\n");
        return 0;
    }

    if (r == ADMIN)
        printf("Welcome Admin!\n");
    else if (r == USER)
        printf("Welcome User!\n");
    else if (r == GUEST)
        printf("Welcome Guest!\n");

    return 0;
}
