#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define IS_FULL(ptr) (!(ptr))
struct Date {
	int year;
	int month;
	int day;
};
Date* NewDate() {
	Date* p = (Date*)malloc(sizeof(Date));
	if (IS_FULL(p)) {
		printf("the memory is full\n");
	}
	return p;
}
int main() {
	struct Date* d = NewDate();
	d->year = 2023;
	d->day = 7;
	d->month = 1;
	printf("%d\n", d->day);
}
