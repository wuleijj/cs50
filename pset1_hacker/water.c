#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int minute, bottles;
    printf("minutes: ");
    
    minute = GetInt();
    
    while(1)
    {
        if (minute == 0)
        {
            printf("minutes: ");
            minute = GetInt();
        }
        else if (minute < 0 )
        {
            printf("minutes: ");
            minute = GetInt();
        }
        else
            break;
    }
    
    bottles = minute * 12;
    printf("%d\n", bottles);
   
    return 0;
}
