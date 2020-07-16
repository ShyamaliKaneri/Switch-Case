#include <stdio.h>
main()
{
    int x;
    printf("Enter a number between 1 to 5 : ");
    scanf("%d", &x);
    switch(x)
    {
        case 1: printf("Food item - Sandwitch\n");
                printf("Prize - Rs.149\n");
        break;
        case 2: printf("Food item - French Fries\n");
                printf("Prize - Rs.99\n");
        break;
        case 3: printf("Food item - Pasta\n");
                printf("Prize - Rs.179\n");
        break;
        case 4: printf("Food item - Burger\n");
                printf("Prize - Rs.129\n");
        break;
        case 5: printf("Food item - Pizza\n");
                printf("Prize - Rs.239\n");
        break;
    }
