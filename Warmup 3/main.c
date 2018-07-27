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

int counter = 0, maxStudents = 15;				// counter is used to loop through all of the students and maxStudents defines the total amount of students that the admin will be able to enter.
int main(int argc, const char * argv[]) {
	struct saveStudent student[maxStudents];	// new array of the object type saveStudent. This is each student's personal info.
	int switchInput = askInt("Please choose one of the following:\n 1. Enter student's info.\n 2. Print all the info saved.\n 3. Search student by ID.\n 4. Exit.\n\n Option: ", 4);
	while(!finished){
		switch (switchInput) {
			case 1:
				student[counter].name = askChar("Please enter the the following field:\n Name: ");
				student[counter].grade = askInt("Please enter the the following field:\n (Please remmber the max grade is 100)\n Grade: ", 100);
				student[counter].name = askChar("Please enter the the following field:\n ID Number: ");
				counter++;
				break;
				
			default:
				break;
		}
	}
    return 0;
}
