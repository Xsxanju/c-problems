#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time diff;
    int startInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int timeDifferenceInSeconds = endInSeconds - startInSeconds;
    if (timeDifferenceInSeconds < 0) {
        timeDifferenceInSeconds += 24 * 3600;
    }
    diff.hours = timeDifferenceInSeconds / 3600;
    diff.minutes = (timeDifferenceInSeconds % 3600) / 60;
    diff.seconds = timeDifferenceInSeconds % 60;
    return diff;
}
int main() {
    struct Time start, end, diff;
    printf("Enter first time in HH:MM:SS: ");
    scanf("%d:%d:%d", &start.hours, &start.minutes, &start.seconds);
    printf("Enter second time in HH:MM:SS: ");
    scanf("%d:%d:%d", &end.hours, &end.minutes, &end.seconds);
    diff = calculateTimeDifference(start, end);
    printf("Time difference is: %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);
    return 0;
}
