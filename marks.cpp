#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float marks;
    char grade;
};

char calculateGrade(float marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 40) return 'D';
    else return 'F';
}

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i+1);
        scanf(" %[^\n]", students[i].name); 
        printf("Enter marks of %s: ", students[i].name);
        scanf("%f", &students[i].marks);
        students[i].grade = calculateGrade(students[i].marks);
    }

    printf("\n Student Report \n");
    printf("%-20s %-10s %-10s\n", "Name", "Marks", "Grade");
    for (i = 0; i < n; i++) {
        printf("%-20s %-10.2f %-10c\n", students[i].name, students[i].marks, students[i].grade);
    }

    return 0;
}

