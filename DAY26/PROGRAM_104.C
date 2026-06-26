#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct {
    char question[256];
    char options[4][64];
    int correct_option;
} Question;
void displayQuestion(Question q)
{
    printf("%s\n", q.question);
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, q.options[i]);
    }
}
int checkAnswer(Question q, int user_answer)
{
    return (user_answer == q.correct_option);
}
int main()
{
    srand(time(NULL));
    Question original_questions[5] = {
        { "Which bird lays the largest egg?",
          { "Owl", "Ostrich", "Kingfisher", "Woodpecker" },
          2 },
        { "How many legs does a spider have?",
          { "7", "8", "6", "5" },
          2 },
        { "Where is capital of india?",
          { "haryana", "delhi",
            "up", "punjab" },
          2 },
        { "Which state is famous for bamboo dance?",
          { "manipur", "agartala", "assam", "mizoram" },
          4 },
        { "What state is knwon as pink city?",
          { "jaipur", "gujrat", "uttar pradesh", "banaras" },
          1 }
    };
    Question questions[5];
    memcpy(questions, original_questions,
           sizeof(original_questions));
    int num_questions = 5;
    int score = 0;
    printf("Hola! Here's your Quiz Game!\n");
    for (int i = 0; i < 5; i++) {
        int random_index = rand() % num_questions;
        Question current_question = questions[random_index];
        displayQuestion(current_question);
        int user_answer;
        printf("Enter your answer (1-4): ");
        scanf("%d", &user_answer);

        if (user_answer >= 1 && user_answer <= 4) {
            if (checkAnswer(current_question,
                            user_answer)) {
                printf("Correct!\n");
                score++;
            }
            else {
                printf("Incorrect. The correct answer is "
                       "%d. %s\n",
                       current_question.correct_option,
                       current_question.options
                           [current_question.correct_option
                            - 1]);
            }
        }
        else {
            printf("Invalid choice. Please enter a number "
                   "between 1 and 4.\n");
        }
        questions[random_index]
            = questions[num_questions - 1];
        num_questions--;
    }

    printf("Well Done Champ !!!! Quiz completed! Your "
           "score: %d/%d\n",
           score, 5);
    return 0;
}