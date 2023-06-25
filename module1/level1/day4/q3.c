#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTimeDifference(struct Time start, struct Time end, struct Time *difference) {
    int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int diffInSeconds = endTimeInSeconds - startTimeInSeconds;

    difference->hours = diffInSeconds / 3600;
    diffInSeconds %= 3600;
    difference->minutes = diffInSeconds / 60;
    difference->seconds = diffInSeconds % 60;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    getTimeDifference(startTime, endTime, &difference);

    printf("Time Difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
