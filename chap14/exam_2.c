#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

const int days_of_months[12] = {
	31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

const int days_of_leap_year_months[12] = {
	31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

const char month_names[12][10] = {
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December",
};

const char month_alias[12][4] = {
	"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};

int is_leap_year(int year);

int main() {
	
	int year;
	int day;
	char month[10];
	int month_index = 0;
	int leap = 0;
	int total_days = 0;

	printf("input date: \n");
	int state = scanf("%d %s %d", &day, month, &year);
	if (state < 3) {
		printf("input error\n");
		exit(0);
	}
	leap = is_leap_year(year);

	if (isdigit(month[0])) {
		month_index = atoi(month) - 1;
	} else {
		for (int i = 0; i < 12; i++) {
			if (strcmp(month, month_names[i]) == 0 || strcmp(month, month_alias[i]) == 0) {
				month_index = i;
				break;
			}
		}
	}

	const int *dp = leap ? days_of_leap_year_months : days_of_months;

	for (int i = 0; i <= month_index; i++) {
		total_days += *(dp + i);
	}

	total_days += day - 1;

	printf("%d days has gone before the date\n", total_days);

	return 0;
}

int is_leap_year(int year) {
	return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}
