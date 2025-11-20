//Simple Grade Calculator

#include <stdio.h>
int main()
{
    int score;
    char grade;

    printf("Enter Your Score/Marks: "); //User Enters his/her Score
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' : 
            (score >= 80) ? 'B'
            : (score >= 70)  ? 'C'
            : (score >= 60)  ? 'D' : 'F';

    printf("Your Grade is %c. ", grade);

    switch (grade) //Comments according to Grade 
    {
        case 'A':
            printf("Excellent work! ");
            break;
        case 'B':
            printf("Well done! ");
            break;
        case 'C':
            printf("Good job! ");
            break;
        case 'D':
            printf("You passed, but you could do better.");
            break;
        case 'F':
            printf("Sorry, you failed. ");
            break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf("Congratulations! You are eligible for the next level.");
    }
    else
    {
        printf("Please try again next time.");
    }
    return 0;
}