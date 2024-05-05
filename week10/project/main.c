#include <stdio.h>

#define MAX_STUDENTS 100

float get_average_score(float scores[], int num_students) {
    float total = 0.0;
    for (int i = 0; i < num_students; i++) {
        total += scores[i];
    }
    float average = total / num_students;
    return average;
}

void get_below_average_students(char names[][50], float scores[], int num_students, float average) {
    printf("Students Below Average Scores:\n");
    int flag = 0;
    for (int i = 0; i < num_students; i++) {
        if (scores[i] < average) {
            printf("%s\n", names[i]);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("No students below average scores.\n");
    }
}

float get_highest_score(float scores[], int num_students) {
    float highest_score = scores[0];
    for (int i = 1; i < num_students; i++) {
        if (scores[i] > highest_score) {
            highest_score = scores[i];
        }
    }
    return highest_score;
}

void get_top_student(char names[][50], float scores[], int num_students, float highest_score) {
    printf("Top Student: ");
    for (int i = 0; i < num_students; i++) {
        if (scores[i] == highest_score) {
            printf("%s\n", names[i]);
            printf("Congratulations, %s!\n", names[i]);
            break;
        }
    }
}

int main() {
    char names[MAX_STUDENTS][50];
    float scores[MAX_STUDENTS];
    int num_students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Prompt the user for each student's name and score
    for (int i = 0; i < num_students; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter the score of student %d: ", i + 1);
        scanf("%f", &scores[i]);
    }

    // Calculate the average score
    float average_score = get_average_score(scores, num_students);
    printf("Average Score: %.2f\n", average_score);

    // Get the students below average score
    get_below_average_students(names, scores, num_students, average_score);

    // Get the highest score
    float highest_score = get_highest_score(scores, num_students);
    printf("Highest Test Score: %.2f\n", highest_score);

    // Get the top-performing student
    get_top_student(names, scores, num_students, highest_score);

    return 0;
}