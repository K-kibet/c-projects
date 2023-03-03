#include <stdio.h>

int main() 
{
    float score;

    printf("Enter your score");
    scanf("%f", &score);

    if(score >= 80 && score <= 100) 
    {
        printf("You got grade A\n");
    }
    else if(score >= 60 && score < 80)
    {
        printf("You got grade B\n");
    }
    else if(score >= 40 && score < 60)
    {
        printf("You got grade C\n");
    }
    else if(score >= 0 && score < 40)
    {
        printf("You got grade D\n");
    }
    else printf("Invalid score format\n");

    return 0;
}