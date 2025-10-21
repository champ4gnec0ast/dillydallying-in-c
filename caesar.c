#include <stdio.h>
#include <string.h>

int main() {
    //declaring relevant variables for program
    char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char message[4] = {'A', 'O', 'H', 'N'};
    int shift = 3;
    char dir = '-';

    for (int y = 0; y < strlen(message); y++) {
        for (int x = 0; x < 26; x++) {
            if (letters[x] == message[y]) {
                x - shift < 0 && dir == '-' ? 
                printf("%c\n", letters[(x + 26) - shift]) : 
                x + shift > 26 && dir == '+' ?
                printf("%c\n", letters[(x + shift) % 26]) :
                dir == '-' ?
                printf("%c\n", letters[x-shift]) :
                printf("%c\n", letters[x+shift]);
            }
        }
    }

    return 0;

}