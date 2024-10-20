int main() {
    struct Student student; 
    int choice;
    const float cutoffPercentage = 70.0;

    do {
        printf("Welcome To College Admission Portal\n");
        printf("Please provide Student Details\n");
        printf("\n1. Add Student Details\n2. Check Admission Status\n3. Exit\n");
        scanf("%d", &choice);int main() {
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
