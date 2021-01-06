#include "lib.h"


int size_counter(char text[]) {

    char spacer[] = " ";
    char* res = strtok(text, spacer);
    int count = 0;

    while (res != NULL)
    {
        count++;
        res = strtok(NULL, spacer);
    }

    return count;
}