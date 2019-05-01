#include <stdio.h>
#include <stdlib.h>

char months[11][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int month_chose;

int main()
{
    printf("Pick your month: ");
    scanf("%d", &month_chose);

    printf("\n");
    printf("You have chose the month number %d which is %s", month_chose, months[month_chose-1]);
    return 0;
}
