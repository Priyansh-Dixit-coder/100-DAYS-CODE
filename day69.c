/* Q119: Write a program to take an integer array as input.
 Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Assuming array values are in range 0..n
    int visited[n+1];
    for(int i = 0; i <= n; i++)
        visited[i] = 0;

    int repeated = -1;

    for(int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            repeated = arr[i];
            break;               // found in one iteration
        }
        visited[arr[i]] = 1;
    }

    printf("%d", repeated);
    return 0;
}

