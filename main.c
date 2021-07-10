
//  main.c

//  Created by Jesus Vasquez-Cipriano on 9/26/20.
//  Copyright © 2020 Jesus Vasquez-Cipriano. All rights reserved.

/* ********************************************
* SUMMARY
* Function: int main()
* Input: User inputs an integer from the 1 to 7 range. Each integer represents a weekday (Mon to Sun).
* Output: Returns 0 on success.
* Procedure: The input is passed to the switch-case construct to activate a case to display a string to user.
 ******************************************* */

#include <stdio.h>

int main() {

    int weekday_input = 0;

    puts("\nHello. If you input an integer from 1 to 7 representing the day of the week, I'll give you a note.\n\nFor example, Monday is 1, Tuesday is 2, etcetera.\n\nTo close this Console, feel free to input an integer outside that range or any data type.");
    
    printf("\nReady? Give me a number: ");
    scanf("%d",&weekday_input);
    
    switch (weekday_input) {
        case 1: //fallout
        case 2:
            printf("You just got started. Be patient.\n");
            break;
        case 3:
            printf("Ah, hump day!\n");
            break;
        case 4: //fallout
        case 5:
            printf("Getting close.\n");
            break;
        case 6: //fallout
        case 7:
            printf("Enjoy it while it lasts, or not!\n");
            break;
        default:
            printf("That number is not allowed.\n");
            break;
    }
    return(0);
}
