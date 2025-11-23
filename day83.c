// Q133: Create an enum for months and print how many days each month has.
#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char month[10];
    enum Month m;

    printf("Enter month (JAN, FEB, MAR, ...): ");
    scanf("%s", month);

    if (strcmp(month, "JAN") == 0) m = JAN;
    else if (strcmp(month, "FEB") == 0) m = FEB;
    else if (strcmp(month, "MAR") == 0) m = MAR;
    else if (strcmp(month, "APR") == 0) m = APR;
    else if (strcmp(month, "MAY") == 0) m = MAY;
    else if (strcmp(month, "JUN") == 0) m = JUN;
    else if (strcmp(month, "JUL") == 0) m = JUL;
    else if (strcmp(month, "AUG") == 0) m = AUG;
    else if (strcmp(month, "SEP") == 0) m = SEP;
    else if (strcmp(month, "OCT") == 0) m = OCT;
    else if (strcmp(month, "NOV") == 0) m = NOV;
    else if (strcmp(month, "DEC") == 0) m = DEC;
    else {
        printf("Invalid month!\n");
        return 0;
    }

    switch (m) {
        case JAN: printf("31 days\n"); break;
        case FEB: printf("28 or 29 days\n"); break;
        case MAR: printf("31 days\n"); break;
        case APR: printf("30 days\n"); break;
        case MAY: printf("31 days\n"); break;
        case JUN: printf("30 days\n"); break;
        case JUL: printf("31 days\n"); break;
        case AUG: printf("31 days\n"); break;
        case SEP: printf("30 days\n"); break;
        case OCT: printf("31 days\n"); break;
        case NOV: printf("30 days\n"); break;
        case DEC: printf("31 days\n"); break;
    }

    return 0;
}
