#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
printf("\nWelcome to the number guessing game!\nguess any number between 1-100\n");

srand(time(0));
int randomnum = (rand () % 100) +1;
int guess , attempts = 0;
// printf("%d" , randomnum);

while (1) {
printf("\nguess a number: ");
scanf("%d" , &guess);
attempts ++;

 /*if(abs(guess - randomnum) <= 5  && guess!= randomnum) {
 printf("u r close");}*/

if (guess > randomnum ){
printf("guess is too high! Try again.\n");}

else if (guess < randomnum ){
 printf("guess is too low! Try again.\n");}

 else{
    printf("congratulations!! your guess is correct, the correct number was %d\n" , randomnum);
 break;}

 }
    return 0;
}