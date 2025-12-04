/* You are given two integers h and m, representing time in 24-hour format:

h → Hour (0 to 23)
m → Minutes (0 to 59)
Your task is to convert this time into 12-hour format and print the result in the form:

{converted_hour}:{minutes} AM/PM
Conversion Rules

00:00 to 11:59 → AM
12:00 to 23:59 → PM
In 12-hour format:

00 hours → 12 AM
12 hours → 12 PM
13–23 hours → 1-11 PM
Minutes must always be printed as given (including leading zeros when necessary).*/

int main() {
    int h, m;
    scanf("%d %d", &h, &m);

    int converted_hour;
    char *period;

    if (h == 0) {
        converted_hour = 12;
        period = "AM";
    } else if (h < 12) {
        converted_hour = h;
        period = "AM";
    } else if (h == 12) {
        converted_hour = 12;
        period = "PM";
    } else {
        converted_hour = h - 12;
        period = "PM";
    }

    printf("%d:%02d %s\n", converted_hour, m, period);
    return 0;
}
