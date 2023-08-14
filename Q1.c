#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_EXAMS 3

    int studentExams[MAX_STUDENTS][MAX_EXAMS];

int main(){

    int totalScore, meanScore[MAX_STUDENTS];
    int minScore = 100;
    int maxScore = 0;

    printf("Please enter the exam score foreach student\n");

    for (int i = 0; i < MAX_STUDENTS; i++){
        printf("Student %d: \n",i+1);
            for (int j = 0; j < MAX_EXAMS; j++){
                scanf("%d",&studentExams[i][j]);
            }
    }

    for (int i = 0; i < MAX_STUDENTS; i++){
        for (int j = 0; j < MAX_EXAMS; j++){
            if (studentExams[i][j] > maxScore){
                maxScore = studentExams[i][j];
            }
            if (studentExams[i][j] < minScore){
                minScore = studentExams[i][j];
            }
            totalScore += studentExams[i][j];
        }   
        meanScore[i] = totalScore/MAX_EXAMS;
        totalScore = 0;
    }

    printf("Students with less than 60%% mean score\n");

    for (int i = 0; i < MAX_STUDENTS; i++){
        if (meanScore[i] < 60){
            printf("Student %d\n", i+1 );
        }
    }

return 0;}