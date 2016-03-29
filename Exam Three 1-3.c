#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10000
#define PAUSE system("pause")
#define CLS system("cls")
#define FLUSH fflush(stdin)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PROTYPE MY FUNCTIONS HERE
int changeIt(int a[], int c);

void main(){

int i, j, temp, score[SIZE];
int sum = 0;
float avg = 0;
int counter = 0;
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
        printf("Enter scores: \n\n"); // get input
        for (i = 0; i < (sizeof score[i]); i++) // sizeof score[i] = size of array
        scanf("%i", &score[i]);

        for (i = 0; i < (sizeof score[i]); i++)
        {
        sum = sum + score[i]; //get sum
        avg = sum / (sizeof score[i]); // get average
        }
        counter++; // add 1 to counter

        break;

        case 'B':
        CLS; // clear the screen
        if (counter == 0) // check if there is no input score
            printf("Please enter a score first.\n\n");

        else
            printf("The average score is %.2f\n\n", avg); // display average score
        break;

        case 'C':
        CLS; // clear the screen
        if (counter == 0) // check if there is no input score
            printf("Please enter a score first.\n\n");
        else
        //start ascending here
        for(i=0;i<(sizeof score[i]);i++)
        {
            for(j=i+1;j<((sizeof score[i]));j++)
            {
                    if(score[i] < score[j])
                    {
                        temp=score[i];
                        score[i]=score[j];
                        score[j]=temp;
                    }
            }
        }

        printf("\n\n Array in the ascending order is: \n");
        for(i=0;i<(sizeof score[i]);i++)
        {
               printf("\n %i",score[i]);
        }

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
} // end of main
