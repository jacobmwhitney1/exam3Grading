/*
* Written by: Collin Johnson,
*
*
*/

#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#define PAUSE system("pause")
#include <stdio.h>
#include <stdlib.h>
		 //Prototype
		 void adjustDown(int array[], int counter); //requirement 6
void adjustUp(int array[], int counter);//req 5
void displayMenu(); //menu requirement
void displayAllNumbered(int array[], int count);//req 4
int numAppeared(int array[], int targetNumber, int count); //used in req 4
float average(int array,int counter);
main() {
	displayMenu();
}// end main
void adjustDown(int array[], int counter) {

	for (int i = 0; i < counter; i++) {//array size looping through all inputed values
		if (array[i] == 5 || array[i] == 4 || array[i] == 3 || array[i] == 2 || array[i] == 1 || array[i] == 0) {//checks to see if the number would go below minimum based on scope
			array[i] = 0; //sets position to zero if conditional proves true
		}//end if
		else { //conditional proves false
			array[i] = array[i] - 5; //decreases the value by 5 for the loop position
		}//end else
	}//end for
}//end adjustDown()
void adjustUp(int array[], int counter) {

	for (int i = 0; i < counter; i++) { //array size looping through all inputed values
		if (array[i] == 98 || array[i] == 99 || array[i] == 100) { //checks to see if the number would go out of bounds of the scope
			array[i] = 100;//sets to the maximim of the scope if conditional is true
		}//end if
		else {
			array[i] = array[i] + 2;
		}//end else
	}//end for
}//end adjustUp()
float average(int array[], int counter){
	float sum=0;
	float avg=0;
	for (int i = 0; i < counter; i++){
		sum = sum + array[i]; //get sum
		avg = sum / counter; // get average
		
	}
	//printf("%f",avg);
	return avg;
}
void displayAllNumbered(int array[], int count) {
	for (int i = 0; i < count; i++) { //count is size of array that has had input
		int quantity = numAppeared(array, array[i], count); //array passes the array // array[i] passes the number in the current position //count passes the size of the array
		printf("Number: %d Times in array: %d \n", array[i], quantity); //prints the whole array and number of times each of the numbers come up
	}//end for
}//end displayAllNumbered
void displayMenu() {
	int input; //switch statement input
	int counter = 0; //inputs of array
	int array[10000]; //size as stated by scope
	do {
		CLS;
		printf("1.\t Input a number\n2.\t Show the Average \n3.\t Show ALL scores highest to lowest \n4.\t Show all scores and the number of times it was scored\n5.\t Increase all exam scores by 2 \n6.\t decrease all exam scores by 5 \n7.\t Quit \n");
		scanf("%d", &input);//switch
		switch (input) {//switch action
		case 1:
			CLS;
			int userInput; //Added to array
			printf("Input a number: \t"); //adds userInput to array
			scanf("%d", &userInput);
			array[counter] = userInput;
			counter++;
			break; //case 1
		case 2:
			CLS;
			float avg;
			if (counter == 0){ // check if there is no input score
				printf("Please enter a score first.\n");
		}else{
				avg = average(array, counter);
				printf("The average score is %.2f\n\n", avg); // display average score
			}
			PAUSE;
			break;//case 2
		case 3:
			CLS;

			break; //case 3
		case 4:
			CLS;
			displayAllNumbered(array, counter); //array to read all numberes //counter to tell size
			PAUSE;
			break;//case 4
		case 5:
			CLS;
			adjustUp(array, counter);//array to read all numberes //counter to tell size
			break;//case 5
		case 6:
			CLS;
			adjustDown(array, counter);//array to read all numberes //counter to tell size
			break;//case 6
		case 7:
			CLS;
			printf("7");
			break;//case 7
		default:
			CLS;
			printf("Invalid input\n");
		}//end switch

	} while (input != 7); //if input 7 is put in, kills do-while
}
int numAppeared(int array[], int targetNumber, int count) {
	int counter = 0;//counter counts the number of times a number shows up in the array
	for (int i = 0; i < count; i++) {
		if (array[i] == targetNumber) {
			counter++;
		}//emd if
	}//end for
	return counter;
}//end numAppeared



//while(!scanf(%i, &value))
			//printf(enter real number);s