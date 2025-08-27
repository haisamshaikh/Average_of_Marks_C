#include <stdio.h>

int main() {
    int marks[5], sum = 0;
    float average;

    printf("Enter 5 marks:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 5.0;
    printf("Average = %.2f\n", average);

    return 0;
}
