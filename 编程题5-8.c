#include <stdio.h>
int main(void)
{
    int hour, minute;
    int input_time;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hour,&minute);
    input_time = hour * 60 + minute;

    if (input_time < ((8 * 60)+ (9 * 60 + 43))/2)
        printf("Closest departure time is 8:00 a.m., arriving at 3：00 p.m.");
    else if (input_time < ((9 * 60 + 43)+ (11 * 60 + 19))/2)
        printf("Closest departure time is 9:43 a.m., arriving at 11：52 p.m.");
    else if (input_time < ((11 * 60 + 19)+ (12 * 60 + 47))/2)
        printf("Closest departure time is 12:47 p.m., arriving at 3：00 p.m.");
    else if (input_time < ((12 * 60 + 47)+ (14 * 60))/2)
        printf("Closest departure time is 2:00 p.m., arriving at 4：08 p.m.");
    else if (input_time < ((14 * 60)+ (15 * 60 + 45))/2)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    else if (input_time < ((15 * 60 + 45)+ (19 * 60))/2)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");

    return 0;
}

