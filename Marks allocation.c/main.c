#include <stdio.h>

int main() {
    float phy_assign, phy_coursework, phy_midterm, phy_end;
    float chem_assign, chem_coursework, chem_midterm, chem_end;
    float math_assign, math_coursework, math_midterm, math_end;

    // Input marks for Physics
    printf("Enter Physics marks:\n");
    printf("Assignment: ");
    scanf("%f", &phy_assign);
    printf("Coursework: ");
    scanf("%f", &phy_coursework);
    printf("Midterm: ");
    scanf("%f", &phy_midterm);
    printf("End-term Exam: ");
    scanf("%f", &phy_end);

    // Input marks for Chemistry
    printf("\nEnter Chemistry marks:\n");
    printf("Assignment: ");
    scanf("%f", &chem_assign);
    printf("Coursework: ");
    scanf("%f", &chem_coursework);
    printf("Midterm: ");
    scanf("%f", &chem_midterm);
    printf("End-term Exam: ");
    scanf("%f", &chem_end);

    // Input marks for Math
    printf("\nEnter Math marks:\n");
    printf("Assignment: ");
    scanf("%f", &math_assign);
    printf("Coursework: ");
    scanf("%f", &math_coursework);
    printf("Midterm: ");
    scanf("%f", &math_midterm);
    printf("End-term Exam: ");
    scanf("%f", &math_end);

    // Calculating average marks per subject
    float phy_avg = (phy_assign + phy_coursework + phy_midterm + phy_end) / 4.0;
    float chem_avg = (chem_assign + chem_coursework + chem_midterm + chem_end) / 4.0;
    float math_avg = (math_assign + math_coursework + math_midterm + math_end) / 4.0;

    // Calculating overall average
    float total_marks = (phy_avg + chem_avg + math_avg);
    float overall_avg = (phy_avg + chem_avg + math_avg) / 3.0;

    // Displaying results
    printf("\n--- Results ---\n");
    printf("Physics Average: %.2f\n", phy_avg);
    printf("Chemistry Average: %.2f\n", chem_avg);
    printf("Math Average: %.2f\n", math_avg);
    printf("Total average marks: %.2f\n", total_marks);
    printf("Overall Average: %.2f\n", overall_avg);

    return 0;
}
