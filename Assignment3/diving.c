#include <stdio.h>

#define NUM_JUDGES 9
#define MAX_SCORE 10
#define MIN_SCORE 0
double promptDifficulty();
double evalScores(double arrayOfScores[]);
double computeFinalScore(double sumScores, double difficulty);

int main() {

    double judgeScores[NUM_JUDGES];
    int i;
    double sumScores;
    double finalScore;
    double difficulty = promptDifficulty();

    for (i = 0; i < NUM_JUDGES; i++) {
        printf("Enter score #%d: ", i + 1);
        double singleScore = 0;
        scanf("%lf", &singleScore);
        judgeScores[i] = singleScore;
    }
    sumScores = evalScores(judgeScores);
    finalScore = computeFinalScore(sumScores, difficulty);
    printf("Score for this dive is %.1lf\n", finalScore);
}

double promptDifficulty() {
    printf("Degree of difficulty for the dive: ");
    double difficulty = 0;
    scanf("%lf", &difficulty);
    return difficulty;
}

double evalScores(double arrayOfScores[]) {

    double highValue1 = MIN_SCORE;
    double highValue2 = MIN_SCORE;
    double lowValue1 = MAX_SCORE;
    double lowValue2 = MAX_SCORE;
    int i;
    double sumScores = 0;
    for (i = 0; i < NUM_JUDGES; i++) {

        if (arrayOfScores[i] > highValue1) {
		highValue2 = highValue1;
                highValue1 = arrayOfScores[i];
        } else if (arrayOfScores[i] > highValue2) {
                highValue2 = arrayOfScores[i];
        }
        if (arrayOfScores[i] < lowValue1) {
		lowValue2 = lowValue1;
                lowValue1 = arrayOfScores[i];
        } else if (arrayOfScores[i] < lowValue2) {
                lowValue2 = arrayOfScores[i];
        }
	sumScores += arrayOfScores[i];
    }

    #ifdef DEBUG
    	printf("low scores are %.1lf and %.1lf, high scores are %.1lf and %.1lf\n", lowValue1, lowValue2, highValue1, highValue2);
    #endif

    return sumScores = sumScores - highValue1 - highValue2 - lowValue1 - lowValue2;
}

double computeFinalScore(double sumScores, double difficulty) {
    double finalScore = (sumScores * difficulty) * 0.6;
    return finalScore;
}

