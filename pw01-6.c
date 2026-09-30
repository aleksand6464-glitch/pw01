#include <stdio.h>

#define DAYS_PER_YEAR 365
#define HOURS_PER_DAY 24
#define SECONDS_PER_HOUR 3600

int main() {
    int age_years = 19;
    long days = (long)age_years * DAYS_PER_YEAR;
    long hours = days * HOURS_PER_DAY;
    long seconds = hours * SECONDS_PER_HOUR;

    printf("Тики: %ld|Часы: %ld|Дни: %ld|Годы: %d\n", seconds, hours, days, age_years);
    return 0;
}
