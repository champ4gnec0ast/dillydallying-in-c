#include <stdio.h>
#include <stdlib.h>

int main() {

    char teams[4][30] = {"Spoingus", "Bingus", "Dave", "pibble"};
    //first val = quality value
    //2nd, 3rd, 4th vals = game values
    int values[4][4];

   int count = 3;

   //assigning each team a quality value
   while (count >= 0) {
    printf("Enter a quality value for team %s: \n", teams[count]);
    while (values[count][0] > 5 || values[count][0] < 0) {
         scanf("%d", &values[count][0]);
    }
    count--;
   }




    
}