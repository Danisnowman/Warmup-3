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

int counter = 0;				// counter is used to loop through all of the students and maxStudents defines the total amount of students that the admin will be able to enter.
bool done;
char studentName[maxLength];
int main(int argc, const char * argv[]) {
	int maxStudents = askInt("Hello! \nPlease enter how many students you wish to enter \n\nStudents: ", 256);
	struct saveStudent student[maxStudents];	// new array of the object type saveStudent. This is each student's personal info.
	while(!done){
	int switchInput = askInt("Please choose one of the following: \n\n1. Enter student's info. \n2. Print all the info saved. \n3. Search student by ID. \n4. Exit.\n\n Option: ", 4);
		switch (switchInput) {
			case 1:
				printf("\n\nPlease Enter the following fields: \nName:");
				scanf("%s", studentName);
				strcpy(student[counter].name, studentName);
				student[counter].grade = askInt("Grade: ", 100);
				student[counter].idCard = askInt("ID: ", 200000000);
				counter++;
				break;
			
			case 2:
				for (int i = 0; i < maxStudents; i++) {
					printf("\n\nStudent's name: %s\n",	student[i].name);
					printf("Students's grade: %d\n",	student[i].grade);
					printf("Student's ID: %d\n",	student[i].idCard);
				} done = true;
				break;
			
			case 3:
				break;
			
			case 4:
				done = true;
				break;
		}
	}
    return 0;
}
