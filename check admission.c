int checkAdmission(float percentage, float cutoffPercentage) {
    if (percentage >= cutoffPercentage) {
        printf("Student has been admitted\n");
        return 1;
    } else {
        printf("Sorry!! Student has insufficient percentage to get admission\n");
        return 0;
    }
}
