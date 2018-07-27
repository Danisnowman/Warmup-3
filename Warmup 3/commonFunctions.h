//
//  commonFunctions.h
//  Warmup 2
//
//  Created by Daniel Hernández on 7/25/18.
//  Copyright © 2018 Daniel Hernández. All rights reserved.
//

#ifndef commonFunctions_h
#define commonFunctions_h

#include <stdio.h>

#define maxLength 256                        //"maxLength" is used to read strings with a maximun total of letters which is it's length (80).

double askDouble(char text[maxLength], double maxValue){     //Asks user for a double, returns said double
    printf("%s", text);
    double input = -1;
    while (input < 0 || input > maxValue){
        /*try{
            input = int.Parse(Console.ReadLine());
        }catch (System.Exception){
            input = -1;
        }*/
        scanf("%lf", &input);
        if (input < 0 || input > maxValue){
            printf("%s Your input is invalid!\n", text);
         }
    }
    return input;
}

int askInt(char text[maxLength], int maxValue){           //Asks user for a integer, returns said integer
    printf("%s", text);
    int input = -1;
    while (input < 0 || input > maxValue){
        /*try{
            input = int.Parse(Console.ReadLine());
         }catch (System.Exception){
            input = -1;
         }*/
        scanf("%d", &input);
        if (input < 0 || input > maxValue){
            printf("%s Your input is invalid!\n", text);
        }
    }
    return input;
}

char askChar(char text[maxLength]){       //Asks user for a char array, returns said char array. NOTE: CURRENTLY NOT WORKING
    printf("%s", text);
    char input;
    scanf("%s", &input);
    return input;
}

#endif /* commonFunctions_h */
