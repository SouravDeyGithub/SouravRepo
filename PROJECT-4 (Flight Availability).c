//C Program to Check Flight Availability
#include <stdio.h>
#include <string.h>

#define MAX_FLIGHTS 10

typedef struct {
    char source[50];
    char destination[50];
    int isAvailable;}

Flight;
Flight flights[] = {
    {"Hyderabad", "Bangalore", 1},
    {"Mumbai", "Delhi", 1},
    {"Kolkata", "Chennai", 1},
    {"Bhubaneswar", "Pune", 0},
    {"Goa", "Chandigarh", 0}
};
int flightCount = sizeof(flights) / sizeof(flights[0]);

int checkFlightAvailability(char source[], char destination[]) {
    for (int i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].source, source) == 0 && strcmp(flights[i].destination, destination) == 0) {
            return flights[i].isAvailable;
        }
    }
    return 0;
}

int checkDateAvailability(int day) {
    return (day >= 1 && day <= 20) ? 1 : 0;
}

int main() {
    char source[50], destination[50];
    int year, month, date;

    printf("Enter source: ");
    scanf("%s", source);
    printf("Enter destination: ");
    scanf("%s", destination);

    if (checkFlightAvailability(source, destination)) {
        printf("Flight is available for this destination.\n");

        printf("Enter year: ");
        scanf("%d", &year);
        printf("Enter month: ");
        scanf("%d", &month);
        printf("Enter date: ");
        scanf("%d", &date);

        if (checkDateAvailability(date)) {
            printf("Flight is available on %04d-%02d-%02d.\n", year, month, date);
        } else {
            printf("No flight is available on %04d-%02d-%02d.\n", year, month, date);
        }
    } else {
        printf("No flight is available for this destination.\n");
    }

    return 0;
}
