#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calPoints(char** operations, int operationsSize) {
    int stack[1000];
    int top = -1;

    for (int i = 0; i < operationsSize; i++) {
        if (strcmp(operations[i], "+") == 0) {
            int sum = stack[top] + stack[top - 1];
            top++;
            stack[top] = sum;
        }
        else if (strcmp(operations[i], "D") == 0) {
            int doubleScore = 2 * stack[top];
            top++;
            stack[top] = doubleScore;
        }
        else if (strcmp(operations[i], "C") == 0) {
            top--;
        }
        else {
            top++;
            stack[top] = atoi(operations[i]);
        }
    }

    int sum = 0;

    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }

    return sum;
}

int main() {
    char* operations[] = {"5", "2", "C", "D", "+"};
    int operationsSize = 5;

    printf("%d\n", calPoints(operations, operationsSize));

    return 0;
}