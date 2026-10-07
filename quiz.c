#include <stdio.h>

#define TOTAL_QUESTIONS 5

struct Question
{
    char question[200];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char answer;
};

int main()
{
    struct Question quiz[TOTAL_QUESTIONS] =
    {
        {
            "Which language is used for system programming?",
            "A. HTML",
            "B. C",
            "C. CSS",
            "D. SQL",
            'B'
        },

        {
            "Which symbol is used to end a C statement?",
            "A. :",
            "B. ;",
            "C. ,",
            "D. .",
            'B'
        },

        {
            "Which function is the starting point of a C program?",
            "A. start()",
            "B. begin()",
            "C. main()",
            "D. run()",
            'C'
        },

        {
            "Which data type stores an integer?",
            "A. float",
            "B. char",
            "C. int",
            "D. double",
            'C'
        },

        {
            "Which keyword is used to declare a constant?",
            "A. constant",
            "B. const",
            "C. fixed",
            "D. final",
            'B'
        }
    };

    int i;
    int score = 0;
    char answer;

    printf("\n==============================");
    printf("\n       C PROGRAMMING QUIZ");
    printf("\n==============================\n");

    for (i = 0; i < TOTAL_QUESTIONS; i++)
    {
        printf("\nQuestion %d: %s\n",
               i + 1, quiz[i].question);

        printf("%s\n", quiz[i].optionA);
        printf("%s\n", quiz[i].optionB);
        printf("%s\n", quiz[i].optionC);
        printf("%s\n", quiz[i].optionD);

        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &answer);

        if (answer == quiz[i].answer ||
            answer == quiz[i].answer + 32)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong answer!\n");
            printf("Correct answer: %c\n",
                   quiz[i].answer);
        }
    }

    printf("\n==============================");
    printf("\n           RESULT");
    printf("\n==============================");

    printf("\nScore: %d/%d\n",
           score, TOTAL_QUESTIONS);

    printf("Percentage: %.2f%%\n",
           (score * 100.0) / TOTAL_QUESTIONS);

    if (score >= 4)
        printf("Excellent performance!\n");
    else if (score >= 3)
        printf("Good performance!\n");
    else
        printf("Keep practicing!\n");

    return 0;
}