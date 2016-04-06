// Code broken, only let me input 4 scores. No Function yet.
//***********************************************************
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10000
#define PAUSE system("pause")
#define CLS system("cls")
#define FLUSH fflush(stdin)
#include <stdio.h>
#include <stdlib.h>

// PROTYPE MY FUNCTIONS HERE
int getScore(int a[], int c);
void displayAverage(int c);
float calcAverage();
//float sortScores();

main(){
	int score[SIZE];
	int counter = 0;
	getScore(score, counter);
	PAUSE;
} // end main

float calcAverage() {
	float result = 0;
	for (i = 0; i < (sizeof score[i]); i++)
	{
		sum += score[i]; //get sum
		avg = sum / (sizeof score[i]); // get average
	}
	return result;
} // end calcAverage

int getScore(int a[], int c) {
	int result = 0;
	printf("Enter a score: \n"); // get input
		scanf("%i", &a[c]);
	return result;
} // end getScore

void displayAverage(int c) {

	if (c == 0) // check if there is no input score
		printf("Please enter a score first.\n\n");

	else
		printf("The average score is %.2f\n\n", avg); // display average score
} // end displayAverage