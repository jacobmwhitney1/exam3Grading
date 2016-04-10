/*
* Written by: Tuan Doan, 
*
*
*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10000
#define PAUSE system("pause")
#define CLS system("cls")
#define FLUSH fflush(stdin)
#include <stdio.h>
#include <stdlib.h>

// PROTYPE MY FUNCTIONS HERE
int getScore(int array[], int counter);
void displayAverage(int counter, float avg);
float calcAverage(int array[], int counter);
void displayAscending(int array[], int counter, char message[]);
char doTheSwitch(int array[], int index);
float calcAscending(int array[], int counter);
//float sortScores();

main(){
	int array[SIZE];
	int counter = 0;
	float avg = 0;
	char message;
	char userChoice = 'Q';
	// Display menu
    do {
        printf("\n==================================\n");
        printf("============= MENU ===============\n");
        printf("==================================\n");
        printf("A. Enter scores\n");
        printf("B. Get average scores\n");
        printf("C. Display scores from high to low\n");
        printf("Q. Quit\n");
        scanf(" %c", &userChoice); FLUSH; // clear the buffer in front of %c
        userChoice = toupper(userChoice); // convert lowercase letter to uppercase

        switch (userChoice){
        case 'A':
        getScore(array, counter);
        break;

        case 'B':
        CLS; // clear the screen
       	displayAverage(counter, avg);
        break;

        case 'C':
        CLS; // clear the screen
        displayAscending(array, counter, "THE ASCENDING SCORE LIST");
        break;

        case 'Q':
        CLS; // clear the screen
        printf("Have a good day!\n\n");
        PAUSE; // pause the program
        break;

        default:
        CLS; // clear the screen
        printf("Invalid choice, please only enter from A - Q\n\n");
        } // end switch

    } while (userChoice != 'Q'); // do loop for all the cases A, B, C, D, E, except Q

return 0;
PAUSE; // pause the program
} // end main

int getScore(int array[], int counter) {
	int result = 0;
	printf("Enter a score: \n"); // get input
    scanf("%i", &array[counter]);
    counter++;
	return result;
} // end getScore

float calcAverage(int array[], int counter) {
    int i = 0;
    float sum = 0;
	float avg = 0;
	float result = 0;
	for (i = 0; i < counter; i++)
	{
		sum += array[i]; //get sum
		avg = sum / array[i]; // get average
	}
	return result;
} // end calcAverage

void displayAverage(int counter, float avg) {

	if (counter == 0) // check if there is no input score
		printf("Please enter a score first.\n\n");

	else
		printf("The average score is %.2f\n\n", avg); // display average score
} // end displayAverage

void displayAscending(int array[], int counter, char message[]) {
  int i,bottom;
  char switchMade;

  bottom = counter - 1;

  do {
     switchMade = 'N';
     for(i=0; i < bottom; i++) {
        if(array[i] < array[i+1])
           switchMade = doTheSwitch(array, i);
     } // end for
     bottom--;
   }while(switchMade == 'Y');

     printf("%s: \n", message);
     for (i=0; i < counter; i++)
     printf("%2i. = %2i.\n", i+1, array[i]);
     printf("\n");
} // end of displayAscending

char doTheSwitch(int array[], int i) {
    char result = 'Y';
    int temp;
    temp = array[i];
    array[i] = array[i+1];
    array[i+1]= temp;
    return result;
} // end function doTheSwitch
