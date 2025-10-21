#include <stdio.h>
#include <string.h>

int main() {
    //declaring relevant variables for program
    char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; 
    char message[101]; 
    char temp[2];
    int shift;
    char dir;

    //taking message
    printf("message yayay: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';
    printf("You entered: %s\n", message);

    //declaring output size
    char output[sizeof(message) + 1];

    //taking shift value & direction
    printf("shift & dir yayayay: ");
    scanf("%d %c", &shift, &dir);

    for (int y = 0; y < strlen(message); y++) {
        for (int x = 0; x < 26; x++) {
            if (letters[x] == message[y]) {
                temp[0] = (dir == '-') ? letters[((x - shift) + 26) % 26 ] : letters[(x + shift) % 26];
                temp[1] = '\0';
                strncat(output, temp, 1);
            }
        }
    }
    printf("%s\n", output);

    return 0;

}