#include<stdio.h>
#include<time.h>  //used to generate truly random numbers as it was generating only 41 
#include<stdlib.h> //for rand() function
int main()
{
int num, guess, numguess=1;
srand(time(0));

num = rand()%100 + 1;


//  printf("The random number is : %d", num); 
//commented it to not reveal the number

 do{
    printf("Enter the number between 1 to 100 \n");
    scanf("%d", &guess);

    if(guess > num)
    {
        printf("Enter a lower number \n");
    }
    else if (guess < num)
    {
        printf("Enter a larger number \n");
    }
    else
    {
        printf("Bingo!! You entered the correct number in %d attempts", numguess);
    }
    numguess++;
 }
    while(guess!= num);



return 0;
}