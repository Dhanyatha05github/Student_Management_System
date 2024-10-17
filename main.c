//Student Management System

#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    float percentage;
    int branch;
};


void displayStudent(struct Student student) {
    printf("\nStudent Name: %s\n", student.name);
    printf("Percentage: %.2f\n", student.percentage);
    printf("Branch: ");
    switch (student.branch) {
        case 1: printf("ECE\n"); break;
        case 2: printf("CSE\n"); break;
        case 3: printf("EEE\n"); break;
        case 4: printf("ISE\n"); break;
        case 5: printf("MECH\n"); break;
        default: printf("Invalid Branch\n"); break;
    }
}


int checkAdmission(float percentage, float cutoffPercentage) {
    if (percentage >= cutoffPercentage) {
        printf("Student has been admitted\n");
        return 1;
    } else {
        printf("Sorry!! Student has insufficient percentage to get admission\n");
        return 0;
    }
}

int main() {
    struct Student student; 
    int choice;
    const float cutoffPercentage = 70.0;

    do {
        printf("Welcome To College Admission Portal\n");
        printf("Please provide Student Details\n");
        printf("\n1. Add Student Details\n2. Check Admission Status\n3. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter student's name: ");
                scanf("%s", student.name);
                printf("Enter percentage: ");
                scanf("%f", &student.percentage);
                printf("Enter branch (1-ECE, 2-CSE, 3-EEE, 4-ISE, 5-MECH): ");
                scanf("%d", &student.branch);
                break;
            case 2:
                displayStudent(student); 
                checkAdmission(student.percentage, cutoffPercentage);
                break;
            case 3:
                printf("Thank You\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
