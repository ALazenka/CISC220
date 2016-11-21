#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int countSpaces(char theString[]) {
        int spaceCount = 0;
        int placeInString;
        int lengthOfString = strlen(theString);
        for (placeInString = 0; placeInString < lengthOfString; placeInString++) {
                if (theString[placeInString] == ' ') {
                        spaceCount++;
                }
        }
        return spaceCount;
}

char** splitString(char theString[], int *arraySize) {
        int placeInString;
        int placeInArray = 0;
        int wordInString = 0;
        *arraySize = countSpaces(theString) + 1;
        int strLength = strlen(theString) + 1;
        char **myArray = malloc(*arraySize * sizeof(char*));

        for (placeInString = 0; placeInString < strLength; placeInString++) {
                int subStringLength = 0;
                while (theString[placeInString] != ' ') {
                        subStringLength++;
                        placeInString++;
                }
                char* makeWord = malloc(subStringLength * sizeof(char));
                while (theString[placeInString] != ' ') {
                        makeWord[wordInString++] = theString[placeInString++];
                }
                makeWord[wordInString] = '\0';
                myArray[placeInArray++] = makeWord;
                wordInString = 0;
        }
  return myArray;
}

void cleanup(char *words[], int numWords) {
        int placeInArray;
        for (placeInArray = 0; placeInArray < numWords; placeInArray++) {
                free(words[placeInArray]);
        }
        free(words);
}
