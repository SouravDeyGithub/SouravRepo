#include <stdio.h>


int dayOfWeek(int d, int m, int y) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}


void printCalendar(int month, int year) {
    int daysInMonth, i, currentDay;

    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        days[1] = 29;


    printf("  ****  Calendar - %d/%d  ****\n", month, year);
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");


    currentDay = dayOfWeek(1, month, year);

    for (i = 0; i < currentDay; i++)
        printf("     ");

    for (i = 1; i <= days[month-1]; i++) {
        printf("%5d", i);
        if (++currentDay > 6) {
            currentDay = 0;
            printf("\n");
        }
    }

    if (currentDay != 0)
        printf("\n");
}

int main() {
    int month, year;

    printf("Enter month and year (MM YYYY): ");
    scanf("%d %d", &month, &year);

    printCalendar(month, year);

    return 0;
}
