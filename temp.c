#include <stdio.h>

int main() {
    char message[101]; 
    //taking message
    printf("message yayay: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';
    printf("You entered: %s\n", message);

    char output[sizeof(message)];
}