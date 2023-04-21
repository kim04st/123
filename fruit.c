#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i, r;
    char choose[20];
    char fruit[6][20] = {"apple", "pineapple", "lemon", "orange", "banana"};
    srand(time(NULL));
    
    r = rand() % 5;
    printf("Guess the fruit: ");
    
    while(1)
    {
        scanf("%s", choose);
        if(strcmp(choose, fruit[r]) == 0)
        {
            printf("SUCCESS!!");
            break;
        }
        else
        {
            printf("TRY AGAIN!!\n");
        }
    }
    
    return 0;
}
