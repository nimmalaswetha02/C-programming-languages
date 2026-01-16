#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;   // variables for 5 subjects
    float total, average;

    // Input marks for 5 subjects
    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    // Calculate total and average
    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5;

    // Output result
    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}
