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
