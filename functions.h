//
// Created by malinka on 11.04.24.
//

#ifndef INC_9_4_FUNCTIONS_H
#define INC_9_4_FUNCTIONS_H

#define SIZE 40

typedef struct computer_mouse{
    char model[SIZE];
    float price;
    int release_year;
}mouse;


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

mouse* input();

void freeMouse(mouse* _mouse);

void output(mouse* _mouse);

//void changeModel(char *newModel, mouse* _mouse);
//
//void changePrice(float newPrice, mouse* _mouse);
//
//void changeReleaseYear(int newYear, mouse* _mouse);

int calculateAge(mouse* _mouse);


#endif //INC_9_4_FUNCTIONS_H
