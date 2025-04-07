#include <stdio.h>

 float get_valid_mark(const char*subject,const char*component){
    float mark;
    while(1){
        printf ("%s %s:",subject,component );
        if(scanf("%f",&mark)==1 && mark>=0 && mark<=100){
            return mark;
        }else {
            printf("Error:Please enter a valid number.\n");
            while(getchar()!='\n'); //clearing input buffer

        }
    }

 }

int main() {
    float phy_assign, phy_coursework, phy_midterm, phy_end;
    float chem_assign, chem_coursework, chem_midterm, chem_end;
    float math_assign, math_coursework, math_midterm, math_end;



    // Input marks for Physics
    printf("Enter Physics marks:\n");
    phy_assign=get_valid_mark("Physics", "Assignment ");
    phy_coursework=get_valid_mark("Physics", "Coursework");
    phy_midterm=get_valid_mark("Physics", "Midterm");
    phy_end=get_valid_mark("Physics", "End");


    // Input marks for Chemistry
    printf("\nEnter Chemistry marks:\n");
    chem_assign=get_valid_mark("Chemistry", "Assignment");
    chem_coursework=get_valid_mark("Chemistry", "Coursework");
    chem_midterm=get_valid_mark("Chemistry", "Midterm");
    chem_end=get_valid_mark("Chemistry", "End");

    // Input marks for Math
    printf("\nEnter Math marks:\n");
    math_assign=get_valid_mark("Math", "Assignment");
    math_coursework=get_valid_mark("Math", "Coursework");
    math_midterm=get_valid_mark("Math", "Midterm");
    math_end=get_valid_mark("Math", "End");



    // Calculating average marks per subject
    float phy_avg = (phy_assign + phy_coursework + phy_midterm + phy_end) / 4.0;
    float chem_avg = (chem_assign + chem_coursework + chem_midterm + chem_end) / 4.0;
    float math_avg = (math_assign + math_coursework + math_midterm + math_end) / 4.0;

    // Calculating overall average
    float total_marks = (phy_avg + chem_avg + math_avg);
    float overall_avg = total_marks / 3.0;

    // Displaying results
    printf("\n--- Results ---\n");
    printf("Physics Average: %.2f\n", phy_avg);
    printf("Chemistry Average: %.2f\n", chem_avg);
    printf("Math Average: %.2f\n", math_avg);
    printf("Total average marks: %.2f\n", total_marks);
    printf("Overall Average: %.2f\n", overall_avg);

    return 0;
}
