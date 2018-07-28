//
//  main.c
//  Warmup 3
//
//  Created by Daniel Hernández on 7/27/18.
//  Copyright © 2018 Daniel Hernández. All rights reserved.
//

#include <stdio.h>
#include "commonFunctions.h"
#include "structs.h"

int counter = 0, id;	// counter is used to loop through all of the students and maxStudents defines the total amount of students that the admin will be able to enter.
bool done;				// used for finishing program
bool noMatch = true;			// if no match is found on the 3rd option of the switch
char studentName[maxLength];	// Array of students, used to have multiple students
int main(int argc, const char * argv[]) {
	int maxStudents = askInt("Hello! \nPlease enter how many students you wish to enter \n\nStudents: ", 256);
	struct saveStudent student[maxStudents];	// new array of the object type saveStudent. This is each student's personal info.
	while(!done){		// Executes the code until done is true (see option '4' in the switch
	int switchInput = askInt("\n\nPlease choose one of the following: \n\n1. Enter student's info. \n2. Print all the info saved. \n3. Search student by ID. \n4. Exit.\n\n Option: ", 4);
		switch (switchInput) {
			case 1:
				printf("\n\nPlease Enter the following fields: \nName:");
				scanf("%s", studentName);
				strcpy(student[counter].name, studentName);
				student[counter].grade = askInt("Grade: ", 100);		// the second parameter on askInt() and askDouble() is the max value the user can enter.
				student[counter].idCard = askInt("ID: ", 200000000);	// the second parameter on askInt() and askDouble() is the max value the user can enter.
				counter++;												// used to count how many students there are (from the possible students that will fit into the array
				break;
			
			case 2:
				for (int i = 0; i < maxStudents; i++) {					// 'for' used to print every student saved in the array
					printf("\nStudent's name: %s\n",	student[i].name);
					printf("Students's grade: %d\n",	student[i].grade);
					printf("Student's ID: %d\n",	student[i].idCard);
				}
				break;
			
			case 3:
				id = askInt("\nPlease enter student's ID. \nID: ", 200000000);				// asks the user for the ID number
				for (int i = 0; i < maxStudents; i++) {
					if (id == student[i].idCard) {											// checks if there's an existing id that matches the input
						printf("\nFound who you are searching for. \nStudent: %s\n", student[i].name);
						noMatch = false;
					}
				}
				if (noMatch)
					printf("\nNo match found. Returning...");
				break;
			
			case 4:
				done = true;		// exits the main menu and thus, ends the program
				break;
		}
	}
    return 0;
}
