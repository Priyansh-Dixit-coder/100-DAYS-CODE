// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[10];
    enum TrafficLight signal;

    printf("Enter traffic signal (RED / YELLOW / GREEN): ");
    scanf("%s", input);

    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid input!\n");
        return 0;
    }

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else if (signal == GREEN)
        printf("Go\n");

    return 0;
}
