//Write your code in this file
#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Function that converts first letter to capital
void capital_letter(char *student){
    if (student[0] != '\0') {
        student[0] = toupper(student[0]);
    }
}

int main (){

    double total_avg = 0.0;
    int highest_avg = 0;

    char students [5][10];
    int scores [5][13];
    double student_avg[5];

    //Taking user inputs for the names & test results
    for(int i = 0; i < 5; i++){
        scanf("%10s", students[i]);
        int sum = 0;
        for(int j = 0; j < 13; j++){
            scanf("%d", &scores[i][j]);
            sum += scores[i][j];
        }
        //calculating student & total average results
        student_avg[i] = sum / (double)13;
        total_avg += student_avg[i];

        //calculating which student in the list that has the highest result
        if(student_avg[i] > student_avg[highest_avg]){
            highest_avg = i;
        }
    }
    //defining the total average based on amount of students
    total_avg /= 5;

    //Printing the name of the student with highest average result
    capital_letter(students[highest_avg]);
    printf("%s\n", students[highest_avg]);
   
    //Printing names of all students who had an average result lower than the total average
    for(int i = 0; i < 5; i++){

        if(student_avg[i] < total_avg){
            capital_letter(students[i]);
            printf("%s\n", students[i]);
        }
    }


    return 0;
}

