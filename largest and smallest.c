#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void findLargestAndSmallestWords(char sentence[]) {
    char largestWord[MAX_LEN];
    char smallestWord[MAX_LEN];
    
    int len = strlen(sentence);
    int i = 0, j = 0;
    
    while (i < len) {
        while (i < len && sentence[i] == ' ')
            i++;
        j = 0;
        while (i < len && sentence[i] != ' ') {
            smallestWord[j] = sentence[i];
            largestWord[j] = sentence[i];
            i++;
            j++;
        }
        smallestWord[j] = '\0';
        largestWord[j] = '\0';
        while (i < len && sentence[i] == ' ')
            i++;
        
        while (i < len && sentence[i] != ' ') {
            if (sentence[i] != ' ') {
                largestWord[j] = sentence[i];
                j++;
            }
            i++;
        }
        largestWord[j] = '\0';
    }
    
    printf("Smallest Word: %s\n", smallestWord);
    printf("Largest Word: %s\n", largestWord);
}

int main() {
    char sentence[MAX_LEN];
    
    printf("Enter a sentence: ");
    gets(sentence);
    
    findLargestAndSmallestWords(sentence);
    
    return 0;
}

